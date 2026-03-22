#include "main.h"
#include <stdio.h>

/**
 * Author: Isah Abdulmumin
 * Program: WinMingle Community C Training
 * Description: Write a program that prints first 50 Fibonacci numbers, starting with 1 and 2, followed by new line..
 *
 * */



int main(void)
{  
    int i;
    int a = 1, b = 2, next;

    for (i = 0; i < 50; i++)
    {
        if(i == 1)
		printf("%d", a);
	else if(i == 2)
		printf(", %d", b);
	else {
		next = a + b;
		printf(", %d", next);
		a = b;
		b = next;
	}
    }
    return (0);
    
}
