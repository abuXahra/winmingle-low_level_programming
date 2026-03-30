#include "main.h"

void print_square(int size){

    int i =0, j;

    while(i < size){
        for(j = 0; j <=size; j++){

            if(j <= 0)
	        _putchar('\n');
	    else{
		 _putchar('#');
	}
   }
    i++;
   }
    _putchar('\n');
}
