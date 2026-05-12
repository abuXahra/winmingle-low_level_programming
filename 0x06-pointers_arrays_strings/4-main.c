
#include "main.h"



/*
 * Author: Isah Abdulmumin
 *  Program: WinMingle Community C Training
 *  Description: Write a fucntion that reverses the contents of an array of integers
 * */


int main(void)
{
    int numbers[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i;

      for(i = 0; i < 9; i++){

        if(numbers[i] < 0){
             _putchar('-');
      	     numbers[i] = -numbers[i];
         }

        if(numbers[i] >= 10)
	    _putchar(numbers[i] / 10 + '0');

        _putchar(numbers[i] % 10 + '0');

	_putchar(' ');
    }

    _putchar('\n');
    
    reverse_array(numbers, 10);

    _putchar('\n');

    return 0;
}
