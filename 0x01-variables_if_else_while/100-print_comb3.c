#include <stdio.h>

/*
 * Author: Isah Abdulmumin
 * Program: WinMingle Community C Training
 * Description: Print all possible different combination of two.
 *
 **/

int main(void){

    int i;
    int j;

    for(i = 0; i <= 8;  i++){

        for(j = i + 1; j <= 9; j++){	

    	    putchar(i + '0');
	    putchar(j + '0');
    	    
            if(i != 8 || j != 9){
  	       
	        putchar(',');
	        putchar(' ');

	    }

	}
		
    }
    putchar('\n');
    return 0;

}   

