#include "main.h"
#include <stdio.h>
#include <string.h>

/*
 * Author: Isah Abdulumin
 * Program: WinMingle Community Training
 * Desription: Locate character in string; return pointer to first occurence or NULL
 * */


int main(void)
{   

     char *s = "hello";
     char *f;
     int i;

     f = _strchr(s, 'l');
     
     for (i = 0; f[i] != '\0'; i++){

     if(f != NULL){
 	    _putchar(f[i]);
	
     }else{
        _putchar('N');
	_putchar('U');
	_putchar('L');
	_putchar('L');
     }
     }
    _putchar('\n');
   
    return 0;

}
