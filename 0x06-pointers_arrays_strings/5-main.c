
#include "main.h"


/*
 * Author: Isah Abdulmumin
 *  Program: WinMingle Community C Training
 *  Description: Write a function that changes all lowercase letters of a string to uppercase.
 * */


int main(void)
{
    char str[] = "Look up!\n";
    int i;

    string_toupper(str);

    for(i = 0; str[i]  != '\0'; i++){

        _putchar(str[i]);

    }

    _putchar('\n');

    return 0;
}
