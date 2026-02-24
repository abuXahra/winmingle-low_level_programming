#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Author: Isah Abdulmumin
 * Program: WinMingle Community C Training
 * Description: Printng out Last Digit of Random number
 * */

int main(void){

    int n;
    int last_digit;


   srand(time(0));
   n = rand() - RAND_MAX;

   last_digit = n % 10;
    
    printf("Last digit of %d is %d and is", n, last_digit);
    

    if(last_digit > 5)
         printf(" great than 5");

     else if(last_digit == 0) 
         printf(" 0");
    
     else  
         printf(" less than 6 and not 0");

     return 0;

}
