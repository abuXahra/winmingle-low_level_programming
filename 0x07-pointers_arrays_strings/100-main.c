#include "main.h"
#include <stdio.h>

/*
 * Author: Isah Abdulumin
 * Program: WinMingle Community Training
 * Desription: Print the sum of two diagonals of a squar matrix.
 * */

int main(void)
{
    char *s0 = "Bob Dylan";
    char *s1 = "Robert Allen";
    int i;
    int j;

    for (i = 0; s0[i] != '\0'; i++) {
    	_putchar(s0[i]);
    }
    _putchar(',');
    _putchar(' ');

    for (j = 0; s1[j] != '\0'; j++){
        _putchar(s1[j]);
    }

    _putchar('\n');

    set_string(&s1, s0);

    for (i = 0; s0[i] != '\0'; i++) {
    	_putchar(s0[i]);
    }
    _putchar(',');
    _putchar(' ');

    for (j = 0; s1[j] != '\0'; j++){
        _putchar(s1[j]);
    }

    _putchar('\n');

    return 0;

}

