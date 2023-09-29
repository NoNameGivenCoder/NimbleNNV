#ifndef _PATCHER_H
#define _PATCHER_H

typedef struct URL_Patch
{
    int address;
    char url[80];
} URL_Patch;

static  const URL_Patch url_patches[] = {
	//nim-boss .rodata
	{0xE2299990, "nppl.nonamegiven.xyz"}, // I would love for this to work, but must curb my expectations.
	
    //nim-boss .bss
    {0xE24B8A24, "https://nppl.nonamegiven.xyz/p01/policylist/1/1/UNK"}
};

#endif
