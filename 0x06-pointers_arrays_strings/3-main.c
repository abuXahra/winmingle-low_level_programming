#include <string.h>
#include "main.h"


/*
 * Author: Isah Abdulmumin
 *  Program: WinMingle Community C Training
 *  Description: Writ a funcion that compares two strings.
 * */


int main(void)
{
    char s1[] = "Hello";
    char s2[] = "World";
    int n, n1, n2;

    n = _strcmp(s1, s2);

    if(n < 0){
        _putchar('-');
	n = -n;
    }

    if(n >= 10)
	    _putchar(n / 10 + '0');

    _putchar(n % 10 + '0');

    _putchar('\n');

    n1 = _strcmp(s2, s1);

    if(n1 < 0){
        _putchar('-');
	n1 = -n1;
    }

    if(n1 >= 10)
	    _putchar(n1 / 10 + '0');

    _putchar(n1 % 10 + '0');

    _putchar('\n');

    n2 = _strcmp(s1, s1);

    if(n2 < 0){
        _putchar('-');
	n2 = -n2;
    }

    if(n2 >= 10)
	    _putchar(n2 / 10 + '0');

    _putchar(n2 % 10 + '0');

    _putchar('\n');

    return 0;
}
