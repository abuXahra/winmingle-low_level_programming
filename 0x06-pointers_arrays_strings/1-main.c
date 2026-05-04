#include <string.h>
#include "main.h"


/*
 * Author: Isah Abdulmumin
 *  Program: WinMingle Community C Training
 *  Description: Writ a funcion that concatinates two strings.
 * */


int main(void)
{
    char dest[100] = "Hello ";
    char src[] = "World";
    int i;
    
    _strcat2(dest, src, 100);

    for (i = 0; dest[i] != '\0'; i++)
	    _putchar(dest[i]);

    _putchar('\n');

    return 0;
}
