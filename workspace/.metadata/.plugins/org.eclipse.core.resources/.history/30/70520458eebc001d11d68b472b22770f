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


FileSystemResult fileRead(char* c_file_name,char* buffer, int size_of_buffer,
		time_unix from_time, time_unix to_time, int* read, int element_size)
{


	return FS_SUCCSESS;
}

FileSystemResult fileWrite(char* file_name, void* element,int size)
{
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
