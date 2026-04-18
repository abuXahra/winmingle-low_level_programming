#include <stdio.h>
#include "main.h"

/*
 * Author: Isah Abdulmumin
 * program: WinMingle Community C Training
 * Description: Write a fuction that swaps the values of integers
 * */

int main(void)
{
   int a = 98;
   int b = 42;

   _putchar('a');
   _putchar('=');
   _putchar('0' + (a / 10));
   _putchar('0' + (a % 10));
   _putchar(',');
   _putchar(' ');
   _putchar('b');
   _putchar('=');
   _putchar('0' + (b / 10));
   _putchar('0' + (b % 10));
   _putchar('\n');
   

   swap_int(&a, &b);
  
   _putchar('a');
   _putchar('=');
   _putchar('0' + (a / 10));
   _putchar('0' + (a % 10));
   _putchar(',');
   _putchar(' ');
   _putchar('b');
   _putchar('=');
   _putchar('0' + (b / 10));
   _putchar('0' + (b % 10));
   _putchar('\n');

    return 0;


}
