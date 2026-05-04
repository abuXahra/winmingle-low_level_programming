#include <string.h>
#include "main.h"

char *_strcat2(char *dest, char *src, int n)
{
    char temp[1000];
    int i;


    for (i = 0; i < n && src[i] != '\0'; i++)
	   temp[i] = src[i]; 
    
     temp[i] = '\0';
 
     strcat(dest, temp);

    return dest;
}
