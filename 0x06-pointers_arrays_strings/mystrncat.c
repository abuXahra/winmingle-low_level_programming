#include <stdio.h>
#include <string.h>
#include "main.h"

int main(void)
{
    char str1[100] = "Hello ";
    char str2[] = "World";
    char *ptr;
    int i;
    
    strcat(str1, str2);

    for (i = 0; str1[i] != '\0'; i++)
	    _putchar(str1[i]);

    _putchar('\n');
    return 0;
}
