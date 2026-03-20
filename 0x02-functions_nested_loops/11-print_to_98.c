
#include "main.h"

void print_to_98(int n)
{
   int i = n;

   if(n <= 98)
   {
       while(i <= 98)
       {
	    int num = i;       

	    if(num < 0)
	    {
                 _putchar('-');
		 num = -num;
	    }
            
	    if(num >= 100)
		    _putchar((num / 100) + '0');

	    if(num >= 10)
		    _putchar(((num / 10) % 10) + '0');

	    _putchar((num % 10) + '0');

	    if(i != 98)
	    {
	        _putchar(',');
		_putchar(' ');
	    }

	    i++;
             
       }
   }
   else
   {
       while(i >= 98)
       {
	    int num = i;       
	    
	    if(num < 0)
	    {
                 _putchar('-');
		 num = -num;
	    }
            
	    if(num >= 100)
		    _putchar((num / 100) + '0');

	    if(num >= 10)
		    _putchar(((num / 10) % 10) + '0');

	    _putchar((num % 10) + '0');

	    if(i != 98)
	    {
	        _putchar(',');
		_putchar(' ');
	    }

	    i--;
       }
   }
 }
