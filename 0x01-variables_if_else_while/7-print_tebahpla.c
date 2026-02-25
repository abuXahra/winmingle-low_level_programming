#include <stdio.h>

/*
 * Author: Isah Abdulmumin
 * Program: WinMingle Community C Training
 * Description: Print the lowercase alphabets in revers order.
 *
 **/

int main(void){

    char letter;

    for(letter = 'z'; letter >= 'a';  letter--){
    	putchar(letter);
    }

    return 0;


}

