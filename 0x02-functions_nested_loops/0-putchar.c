#include "main.h"
#include <stdio.h>
/*
 * Author: Isah Abdulmumin
 * Program: WinMingle Community C Training
 * Description: Write a program that prints _putchar, followed by a new line.
 * */

int main(void)

{    
    int i = 0;
    char c;

    char a[] = "_putchar";

    while(i <= 8 ){
          
	  c = a[i];
	  _putchar(c);

          i++;
     } 
     return 0;
}
