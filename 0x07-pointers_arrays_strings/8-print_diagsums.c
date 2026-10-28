#include "main.h"

void print_number(int n)
{
   if (n < 0)
   {
       _putchar('-');
       n = -n;

   }

   if (n / 10)
	   print_number(n / 10);
   _putchar((n % 10) + '0');
}


void print_diagsums(int *a, int size){
     int primary = 0;
     int secondary = 0;
     int i;

     for (i = 0; i < size; i++){
         primary += a[i * size + i];
	 secondary += a[i * size + (size - 1 - i)];
     }

     print_number(primary);
     _putchar(',');
     _putchar(' ');
     print_number(secondary);
     _putchar('\n');

    
}
