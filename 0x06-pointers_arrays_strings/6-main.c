
#include "main.h"
#include <ctype.h>


/*
 * Author: Isah Abdulmumin
 *  Program: WinMingle Community C Training
 *  Description: Write a function that capitalizes all words of a string.
 * */

int main(void)
{
    char str[] = "expect the best. prepare for the worst. capitalize on what comes.\nhello world!";
    char *ptr;
    int i;

    ptr = cap_string(str);

    for(i = 0; ptr[i]  != '\0'; i++){

        _putchar(ptr[i]);

    }

    _putchar('\n');

    return 0;
}
