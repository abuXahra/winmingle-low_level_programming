#include <stdio.h>
#include "main.h"


/*
 * Author: Isah Abdulumin
 * Program: WinMingle Community Training
 * Desription: Writ a function that returns the value of x raised to the power of y.
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
    
       
     int n; 
     n  =  _pow_recursion(1, 10);  
     print_number(n);
     _putchar('\n');
 
     n  =  _pow_recursion(1024, 0);  
     print_number(n);
     _putchar('\n');

     n  =  _pow_recursion(2, 16);  
     print_number(n);
     _putchar('\n');

     n  =  _pow_recursion(5, 2);  
     print_number(n);
     _putchar('\n');

     n  =  _pow_recursion(5, -2);  
     print_number(n);
     _putchar('\n');

     n  =  _pow_recursion(-5, 3);  
     print_number(n);
     _putchar('\n');

    return 0;
}
