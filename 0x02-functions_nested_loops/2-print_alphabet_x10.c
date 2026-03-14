#include "main.h"

/**
 * Author: Isah Abdulmumin
 * Program: WinMingle Community C Training
 * Description: Write a function that prints 10 times the alphabet, in lowercase, followed by a new line
 * */



void print_alphabet(void)
{
    char x;
    int count = 0;

    while(count < 10 ){
        for(x = 'a'; x <= 'z'; x++){
            _putchar(x);
           }
        _putchar('\n');
        count++;        
   }
}
