#include "main.h"

int main(void)
{
    char src[] = "First, solve the problem. Then, write the code";
    char dest[100];
    int i;

    _strcpy(dest, src);
     
    for (i = 0; src[i] != '\0'; i++)
    {              
        _putchar(src[i]);
    }

    _putchar('\n');

    for (i = 0; dest[i] != '\0'; i++)
    {              
        _putchar(dest[i]);
    }
    _putchar('\n');

    return 0;
}
