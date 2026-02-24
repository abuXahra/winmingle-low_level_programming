#include <stdio.h>

/*
 * Author: Isah Aboulmumin
 * Program: WinMingle Community C Training
 * Description: Print the alphabet in lowercase, then uppercase followed by new line
 * **/

int main(void){

    char ch;
   
    /* Print lowercase letters*/
    for (ch = 'a'; ch <= 'z'; ch++ ){
	    putchar(ch);
	
    }

    /* Print uppercase letters*/
     for (ch = 'A'; ch <='Z'; ch++ ){
	    putchar(ch);
    }

    /* Print new line*/
    putchar('\n');

    return 0;
}
