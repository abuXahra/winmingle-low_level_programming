#include <string.h>
#include "main.h"


/*
 * Author: Isah Abdulmumin
 *  Program: WinMingle Community C Training
 *  Description: Writ a funcion that copies a string.
 * */


int main(void)
{
    char dest[100];
    char src[] = "First, solve the problem. Then, write the code\n";
    char src2[] = "Second, solve the problem. Then, write the code\n";
    int i;

    _strncpy(dest, src, 100);

    for (i = 0; dest[i] != '\0'; i++)
            _putchar(dest[i]);

    _putchar('\n');

    _strncpy(dest, src2, 100);

    for (i = 0; dest[i] != '\0'; i++)
            _putchar(dest[i]);

    _putchar('\n');


    return 0;
}
