#include "main.h"
#include <stdio.h>

/*
 * Author: Isah Abdulumin
 * Program: WinMingle Community Training
 * Desription: Return length of prefix substring matching bytes from accept.
 * */

int main(void)
{

     char *s = "hello, world";
     char *f = "oleh";
     unsigned int n;
   

     n = _strspn(s, f);

     _putchar(n + '0');
    
    _putchar('\n');

    return 0;

}
