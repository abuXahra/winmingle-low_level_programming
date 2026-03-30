
#include "main.h"

void print_diagonal(int n){
  
    int i, j;

    for(i = 0; i < n; i++){
    
	for(j = 0; j < i; j++){
	    _putchar(' ');
	}
        if(n <= 0)
		_putchar('\n');
	else{
		_putchar('\\');
		_putchar('\n');
	}
    }
    _putchar('\n');
}


