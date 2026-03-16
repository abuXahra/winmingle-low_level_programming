#include "main.h"

int print_last_digit(int n){

    int lastDigit;

    lastDigit = n % 10;

    if(lastDigit < 0)
	    lastDigit = -lastDigit;
    _putchar('0' + lastDigit);
    return lastDigit;
}
