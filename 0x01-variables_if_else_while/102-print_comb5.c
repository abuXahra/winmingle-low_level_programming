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

    for(i = 0; i <= 99;  i++){

        for(j = i + 1; j <= 99; j++){	

            printf("%02d %02d", i, j);    	    	    
    	    
            if(i != 8 || j != 9){

	        printf(", ");

	    }

	}
		
    }
    printf("\n");
    return 0;

}   

