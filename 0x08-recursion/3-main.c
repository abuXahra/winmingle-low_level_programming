#include <stdio.h>
#include "main.h"


/*
 * Author: Isah Abdulumin
 * Program: WinMingle Community Training
 * Desription: Writ a function that returns the factorial of a given number..
 * */

void print_number(int n){
    if (n < 0)
    {
        _putchar( '-');
	n = -n;
    }

    if(n/10){
        print_number(n /10);
    }


    _putchar((n % 10) + '0');
}


int main(){
    
       
    int n = factorial(1);
    int n2 = factorial(5);
    int n3 = factorial(10);
    int n4 = factorial(-1024);
    
     print_number(n);
    _putchar('\n');

   
    print_number(n2);
    _putchar('\n');

    print_number(n3);
    _putchar('\n');

    print_number(n4);
    _putchar('\n');

    return 0;
}
