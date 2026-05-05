#include "main.h"
#include <string.h>

char *_strncpy(char *dest, char *src, int n)
{

    int i;
    char temp[1000];

    for (i = 0; i < n && src[i] != '\0'; i++)
	    temp[i] = src[i];
    temp[i] = '\0';

    strcpy(dest, temp);

    return dest;
}


