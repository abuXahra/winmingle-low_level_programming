
#include "main.h"
#include <ctype.h>


/*
 *  Author: Isah Abdulmumin
 *  Program: WinMingle Community C Training
 *  Description: Write a funtion that encodes a string rot13.
 * */


int main(void)
{
    char str[] = "ROT13 (rotate by 13 places)";
    char *ptr;
    int i, j;

    for(j = 0; str[j]  != '\0'; j++){

        _putchar(str[j]);

    }
 
   _putchar('\n');
 
    ptr = rot13(str);

    for(i = 0; ptr[i]  != '\0'; i++){

        _putchar(ptr[i]);

    }

   _putchar('\n');

    return 0;
}
