#include "main.h"
#include <stdio.h>

int main(void)
{
    char c;
    int r;
   
    c = 'A';    
    r = _isupper(c);

    _putchar(c);
    _putchar(':');
    _putchar(' ');
    _putchar( r + '0');
    _putchar('\n');

    c = 'a';    
    r = _isupper(c);

    _putchar(c);
    _putchar(':');
    _putchar(' ');
    _putchar( r + '0');
    _putchar('\n');



    return 0;

    
}
