#include <stdio.h>

/*
 * Author: Isah Abdulmumin
 * Program: WinMingle Community C Training
 * Description: Program that print out alphabet using only two putchar
 * */

int main(void){

    char ch;

    for(ch = 'a'; ch <= 'z'; ch++){
    	putchar(ch);
	putchar('\n');
    }

    return 0;
}
