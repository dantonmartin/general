#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "CAENComm.h"

#ifndef U32
#define U32 uint32_t
#endif
#ifndef U16
#define U16 uint16_t
#endif
#ifndef U8
#define U8 uint8_t
#endif

int handle;
uint32_t Data;

int OpenDevice(CAENComm_ConnectionType LinkType,
			   int LinkNum,
			   int ConetNode,
		       uint32_t VMEBaseAddress,
	           int *handle)
{
	 CAENComm_ErrorCode STDCALL CAENComm_OpenDevice(CAENComm_ConnectionType LinkType, 
														   int LinkNum, 
														   int ConetNode, 
														   uint32_t VMEBaseAddress, 
														   int *handle);
};

void Write32(int handle,
	   		 uint32_t Address,
			 uint32_t Data)
{
	CAENComm_ErrorCode STDCALL CAENComm_Write32(int handle, 
												uint32_t Address, 
												uint32_t Data);
};

uint32_t Read32(int handle,				 
				uint32_t Address,
				uint32_t *Data)
{
	CAENComm_ErrorCode STDCALL CAENComm_Read32(int handle, 
													   uint32_t Address, 
													   uint32_t *Data);
};

void CloseDevice(int handle)
{
	CAENComm_ErrorCode STDCALL CAENComm_CloseDevice(int handle);
};
