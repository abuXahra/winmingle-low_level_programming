#include <string.h>
#include "main.h"

void puts_half(char *str)
{
    int i;
    int len = 0;
    int start;

    /* find length of string */
    while (str[len] != '\0')
    {
        len++;
    }

    /* determine starting point */
    if (len % 2 == 0)
        start = len / 2;
    else
        start = (len + 1) / 2;

    /* print second half */
    for (i = start; str[i] != '\0'; i++)
    {
        _putchar(str[i]);
    }

    _putchar('\n');
}


