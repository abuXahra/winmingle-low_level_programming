#include <stdio.h>
#include "main.h"


/*
 * Author: Isah Abdulumin
 * Program: WinMingle Community Training
 * Desription: Writ a function that returns the natural square root of a number.
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
     n  = _sqrt_recursion(1); 
     print_number(n);
     _putchar('\n');
 
     n  = _sqrt_recursion(1024);  
     print_number(n);
     _putchar('\n');

     n  = _sqrt_recursion(16);       
     print_number(n);
     _putchar('\n');

     n  = _sqrt_recursion(17);    
     print_number(n);
     _putchar('\n');

     n  = _sqrt_recursion(25);    
     print_number(n);
     _putchar('\n');

     n  = _sqrt_recursion(-1);    
     print_number(n);
     _putchar('\n');

     return 0;
}
