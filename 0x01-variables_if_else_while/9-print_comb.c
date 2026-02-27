#include <stdio.h>

/*
 * Author: Isah Abdulmumin
 * Program: WinMingle Community C Training
 * Description: Print all possible combinations of single-digit  numbers by commas and spaces
 *
 **/

int main(void){

    int i;

    for(i = 0; i < 10;  i++){
    	if(i != 9)
	    printf("%d, ", i);
	else
	    printf("%d", i);	
    }

    return 0;


}

