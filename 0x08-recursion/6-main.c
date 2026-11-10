#include <stdio.h>
#include "main.h"


/*
 * Author: Isah Abdulumin
 * Program: WinMingle Community Training
 * Desription: Writ a function that returns 1 if the input integer is a prime number, otherwise return 0.
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
     n  = is_prime_number(1); 
     print_number(n);
     _putchar('\n');
 
     n  = is_prime_number(1024);  
     print_number(n);
     _putchar('\n');

     n  = is_prime_number(16);       
     print_number(n);
     _putchar('\n');

     n  = is_prime_number(17);    
     print_number(n);
     _putchar('\n');

     n  = is_prime_number(25);    
     print_number(n);
     _putchar('\n');
    
     n  = is_prime_number(-1);    
     print_number(n);
     _putchar('\n');

     n  = is_prime_number(113);    
     print_number(n);
     _putchar('\n');

     n  = is_prime_number(7919);    
     print_number(n);
     _putchar('\n');

     return 0;
}
