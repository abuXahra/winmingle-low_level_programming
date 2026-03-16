#include "main.h"
#include <stdio.h>

/**
 * Author: Isah Abdulmumin
 * Program: WinMingle Community C Training
 * Description: Write a function that prints the last digit of a number
 *
 * */



int main(void)
{
   
    int  r;
    print_last_digit(98);
    print_last_digit(0);

    r = print_last_digit(1024);
    _putchar('0' + r);
    _putchar('\n');
   
    return (0);
    
}
