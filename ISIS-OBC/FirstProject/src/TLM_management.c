/*
 * filesystem.c
 *
 *  Created on: 20 áîøõ 2019
 *      Author: Idan
 */
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>


#include <config/config_fat.h>

#include <hcc/api_mdriver_atmel_mcipdc.h>
#include <hcc/api_hcc_mem.h>

#include <at91/utility/trace.h>

#include <hal/Timing/Time.h>
#include <hal/errors.h>
#include <hal/Storage/FRAM.h>

#include <string.h>
#include <stdlib.h>
#include "TLM_management.h"


//TODO: binary search
//TODO: read number of records together instead of one
FileSystemResult fileRead(char* file_name, char* buffer, int size_of_buffer,
		time_unix from_time, time_unix to_time, int* read, int element_size)
{
	if (!file_name || !buffer || size_of_buffer <= 0 || from_time < to_time || !read || element_size <= 0)
		return FS_FAIL;

	F_FILE *file = f_open(file_name, "r");
	if (!file)
		return FS_FAT_API_FAIL;

	unsigned int rec_size = sizeof(unsigned int) + element_size;
	char* curr_rec = malloc(rec_size);
	unsigned int curr_time = 0;
	while (f_read(curr_rec, 1, element_size, file)){
		memcpy(&curr_time, curr_rec, sizeof(unsigned int));
		if (curr_time < from_time)
			continue;
		else if (curr_time > to_time){
			free(curr_rec);
			return FS_NOT_EXIST;
		}
		else
			break;
	}

	*read = 0;
	while (curr_time <= to_time){
		if ((*read + 1) * rec_size > size_of_buffer){
			free(curr_rec);
			return FS_BUFFER_OVERFLOW;
		}
		memcpy(buffer + *read * rec_size, curr_rec, rec_size);
		*read += 1;
		if (!f_read(curr_rec, 1, element_size, file))
			break;
		memcpy(&curr_time, curr_rec, sizeof(unsigned int));
	}

	if (!f_close(file))
		return FS_FAT_API_FAIL;
	free(curr_rec);
	return FS_SUCCSESS;
}

FileSystemResult fileWrite(char* file_name, void* element, int size)
{
	if (!file_name || !element || !size)
		return FS_FAIL;

	if (strlen(file_name) > MAX_F_FILE_NAME_SIZE)
		return FS_TOO_LONG_NAME;

	F_FILE *file = f_open(file_name, "a");
	if (!file)
		return FS_FAT_API_FAIL;

	unsigned int curr_time = 0;
	int res = Time_getUnixEpoch(&curr_time);
	if (res)
		return FS_FAIL;

	if (!f_write(&curr_time, 1, sizeof(int), file))
		return FS_FAT_API_FAIL;
	if (!f_write(element, 1, size, file))
			return FS_FAT_API_FAIL;


	if (!f_close(file))
		return FS_FAT_API_FAIL;

	return FS_SUCCSESS;
}

FileSystemResult InitializeFS()
{
	
	int ret;
	hcc_mem_init(); /* Initialize the memory to be used by filesystem */

	ret = fs_init(); /* Initialize the filesystem */
	if(ret != F_NO_ERROR )
	{
		return FS_FAT_API_FAIL;
	}

	ret = f_enterFS(); /* Register this task with filesystem *///task 1 enter fs

	if( ret != F_NO_ERROR)
	{
		return FS_FAT_API_FAIL;
	}
	int sd_index = 0;
	ret = f_initvolume( 0, atmel_mcipdc_initfunc, sd_index ); /* Initialize volID as safe */

	if( F_NO_ERROR != ret)
	{
		return FS_FAT_API_FAIL;
	}
	return FS_SUCCSESS;
}
