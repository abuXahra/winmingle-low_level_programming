#include "main.h"
#include <stdio.h>
/**
 * Author: Isah Abdulmumin
 * Program: WinMingle Community C Training
 * Description: Write a function that prints all natural numbers from n to 98, follwed by a new line.
 *
 * */



int main(void)
{
    int n;
    printf("Enter the number: ");

    scanf("%d", &n);

    print_to_98(n);

    _putchar('\n');

    return (0);
    
}
