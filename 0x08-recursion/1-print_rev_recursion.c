#include "main.h"

void _print_rev_recursion(char *s){

    int i;

    for (i = 0; s[i] != '\0'; i++){
        ;
    }

    for (i = i - 1; i >= 0;  i--){
        _putchar(s[i]);
    }
}
