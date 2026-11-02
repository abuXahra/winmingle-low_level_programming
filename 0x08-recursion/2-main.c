#include <stdio.h>
#include "main.h"


/*
 * Author: Isah Abdulumin
 * Program: WinMingle Community Training
 * Desription: Writ a function that returns the length of a string.
 * */




int main(){
    
    char array[] = {"Corbin Coleman"};
    
    int n = _strlen_recursion(array);

    if (n < 0)
    {
        _putchar('-');
	n  = -n;
    }

    if(n >= 100)
	    _putchar((n / 100) + '0');

    if(n >= 10)
	    _putchar(((n / 10) % 10) + '0');
    
    _putchar((n % 10) + '0');

    _putchar('\n');

    return 0;
}
