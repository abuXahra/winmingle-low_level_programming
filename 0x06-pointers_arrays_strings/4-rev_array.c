
#include "main.h"

void reverse_array(int *a, int n){

    int i;

    for(i = n - 1; i > 0; i--){

        if(a[i] < 0){
             _putchar('-');
       	     a[i] = -a[i];
         }

        if(a[i] >= 10)
	    _putchar(a[i] / 10 + '0');

        _putchar(a[i] % 10 + '0');
        _putchar(' ');
    }

}


