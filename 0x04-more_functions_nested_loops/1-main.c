#include "main.h"
#include <stdio.h>

/**
 * Author: Isah Abdulmumin
 * Program: WinMingle Community C Training
 * Description: Write a function that checks for a digit (0 throuht 9).
 * */

int main(void)
{
    int c;
    int r;
   
    c = '0';    
    r = _isdigit(c);

    _putchar(c);
    _putchar(':');
    _putchar(' ');
    _putchar( r + '0');
    _putchar('\n');

    c = 'a';    
    r = _isdigit(c);

    _putchar(c);
    _putchar(':');
    _putchar(' ');
    _putchar( r + '0');
    _putchar('\n');

    return 0;

    
}
