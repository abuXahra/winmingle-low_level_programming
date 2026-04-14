#include <stdio.h>
#include "main.h"

/*
 * Author: Isah Abdulmumin
 * program:  WinMingle Community C Training
 * Description: Write a fcunction that takes a ponter to an int as a paramater and updates the value it points t0 98
 * */

int main(void)
{   
    int n = 402;
    if (n >= 100)
	    _putchar((n / 100) + '0');

    if (n >= 10)
	    _putchar(((n / 10) % 10) + '0');

    _putchar((n % 10) + '0');
    _putchar('\n');

    /*printf("n = %d\n", n);*/
    
    reset_to_98(&n); 

    if (n >= 100)
	    _putchar((n / 100) + '0');

    if (n >= 10)
	    _putchar(((n / 10) % 10) + '0');

    _putchar((n % 10) + '0');
    _putchar('\n');

/*    printf("n = %d\n", n);*/
 
   

    return 0;
}
