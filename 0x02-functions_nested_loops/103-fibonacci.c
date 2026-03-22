#include "main.h"
#include <stdio.h>

/**
 * Author: Isah Abdulmumin
 * Program: WinMingle Community C Training
 * Description: Write a program that prints find and prints the sum of  even-valued terms, followed by a new line.
 *
 * */



int main(void)
{  
    int limit = 4000000;
    int a = 1, b = 2, next;
    int sum = 0;

    while (a <= limit )
    {
        if(a % 2 == 0)
		sum += a;
	next = a + b;
	a = b;
	b = next;
    }
   printf("%d\n", sum);

   return (0);
    
}
