#include "main.h"
#include <stdio.h>

/* simple_print_buffer - prints buffer in hexa*/
void simple_print_buffer(char *buffer, unsigned int size)
{
   unsigned int i;
   char hex[] = "0123456789abcdef";
   i = 0;
   while(i < size)
   {
       if(i % 10)
       /*    printf(" ");*/
           _putchar(' ');
       if(!(i % 10) && i)
            _putchar('\n');
       _putchar('0');
       _putchar('x');
       _putchar(hex[buffer[i] / 16]);
       _putchar(hex[buffer[i] % 16]);
       i++;
   }
   printf("\n");
}



int main(void)
{   int i;
    char buffer[98] = {0};
    simple_print_buffer(buffer, 98);
    _memset(buffer, 0x01, 95);
    for (i = 0; i < 29; i++){
        _putchar('-');
    }
    _putchar('\n');
    simple_print_buffer(buffer, 98);
    return 0;

}

