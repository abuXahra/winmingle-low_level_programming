#include "main.h"

/**
 * Author: Isah Abdulmumin
 * Program: WinMingle Community C Training
 * Description: Write a function that adds two integers and returns the result.
 *
 * */



int main(void)
{
    int n;
    n = add(89, 9);

    if(n >= 10)
        _putchar((n/ 10) + '0');

    _putchar((n % 10) + '0');
    _putchar('\n');

    return (0);
    
}
