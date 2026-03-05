#include <stdio.h>
/*
 * Author: Isah Abdulmumin
 * Program: WinMingle Community C Training
 * Description: Write a functions that prints 10 times the alphabet, in lowercase, followed by a new line.
 * */

int main()
{
    char i;
    int n = 1;

    while(n < 10 ){
    for(i ='a'; i <= 'z'; i++){
    	putchar(i);
    }
    putchar('\n');
        n++;
    }
    return (0);
}
