#include <stdio.h>
#include <ctype.h>

/*
 * Author: Isah Abdulmumin
 * Program: WinMingle CommunitY C Training
 * Description: Write a function that check for lowercase`
 * */

int _islower(int c)
{
    if(islower(c))
        return (1);
    else
        return (0);
}

int main(void){

    int r;
   
    r =  _islower('0');

    putchar(r + '0');

    return (0);

}
