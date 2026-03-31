#include "main.h"
#include <stdio.h>

/**
 * Author: Isah Abdulmumin
 * Program: WinMingle Community C Training
 * Description: Write a program that finds and prints the largest prime factor of the number 612852475143, followed by a new line. 
 * */

int main(void)
{
    unsigned long n = 612852475143;
    unsigned long largest = 0;
    unsigned long i;

    /*Remove fators of 2*/    
    while (n % 2 == 0)
    {
        largest = 2;
        n /= 2;
    }

    /*Check odd factors*/   
    i = 3;
    while(i * i <= n)
    {
        while(n % i == 0)
	{
	    largest = i;
	    n /= i;
	}
	i += 2;
    }

    /*If remaining n is prime*/
    if(n > 2)
    {
        largest = n;
    }
    printf("%lu\n", largest);

    return 0;   
}
