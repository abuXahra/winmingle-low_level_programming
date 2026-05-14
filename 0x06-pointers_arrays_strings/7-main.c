
#include "main.h"
#include <ctype.h>


/*
 *  Author: Isah Abdulmumin
 *  Program: WinMingle Community C Training
 *  Description: Encoding a string into 1337 (leet speak).
 * */


int main(void)
{
    char str[] = "Expect the best. prepare for the worst.\n";
    char *ptr;
    int i;

    ptr = leet(str);

    for(i = 0; ptr[i]  != '\0'; i++){

        _putchar(ptr[i]);

    }

    _putchar('\n');

    return 0;
}
