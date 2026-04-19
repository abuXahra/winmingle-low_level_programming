#include <string.h>
#include "main.h"

void print_rev(char *s)
{
    int len = strlen(s);	
    int i;

    for (i = len; i > 0; i--)
    {
         _putchar(s[i]);
    }
    _putchar('\n');
   
}

