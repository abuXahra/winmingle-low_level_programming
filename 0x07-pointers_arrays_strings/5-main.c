#include "main.h"
#include <stdio.h>

/*
 * Author: Isah Abdulumin
 * Program: WinMingle Community Training
 * Desription: Locate substring needle in haystack.
 * */

int main(void)
{
     int i;
     char *s = "hello, world";
     char *f = "world";
     char *t = _strstr(s, f);

     for(i = 0; t[i] != '\0'; i++) {
         _putchar(t[i]);
     }

    _putchar('\n');

    return 0;

}
