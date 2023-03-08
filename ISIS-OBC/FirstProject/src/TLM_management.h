/*
 * TM_managment.h
 *
 *  Created on: Apr 8, 2019
 *      Author: Hoopoe3n
 */

#ifndef TM_MANAGMENT_H_
#define TM_MANAGMENT_H_

#include <hcc/api_fat.h>

#define MAX_F_FILE_NAME_SIZE 9
typedef  int time_unix;
typedef enum
{
	FS_SUCCSESS,
	FS_DUPLICATED,
	FS_LOCKED,
	FS_TOO_LONG_NAME,
	FS_BUFFER_OVERFLOW,
	FS_NOT_EXIST,
	FS_ALLOCATION_ERROR,
	FS_FRAM_FAIL,
	FS_FAT_API_FAIL,
	FS_FAIL,
	FS_COULD_NOT_CREATE_SEMAPHORE,
	FS_COULD_NOT_TAKE_SEMAPHORE,
	FS_COULD_NOT_GIVE_SEMAPHORE
} FileSystemResult;


/*!
 * Initializes the file system.
 * @note call once for boot and after DeInitializeFS.
 * @return FS_FAIL if Initializing the FS failed,
 * FS_ALLOCATION_ERROR on malloc error,
 * FS_SUCCSESS on success.
 */
FileSystemResult InitializeFS();

FileSystemResult fileRead(char* c_file_name,char* buffer, int size_of_buffer,
		time_unix from_time, time_unix to_time, int* read, int element_size);

FileSystemResult fileWrite(char* file_name, void* element,int size);

#endif
