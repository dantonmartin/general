#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "OwnLibrary.c"

#ifndef U32
#define U32 uint32_t
#endif
#ifndef U16
#define U16 uint16_t
#endif
#ifndef U8
#define U8 uint8_t
#endif

int main(){
	
	uint32_t Address = 0;
	int handle;
	uint32_t Data = 0;
	
	handle = OpenDevice (0, 0, 0, 0, &handle);
	
	Write32 (handle, Address, Data);
	
	Data = Read32 (handle, Address, &Data);
	
	CloseDevice (handle);
	
	printf("Device was closed.\n");
	
}