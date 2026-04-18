#include "main.h"
#include <string.h>

void _puts(char *str)
{
  int i;
  int len = strlen(str);

  for (i = 0; i <= len; i++ )
      	_putchar(str[i]);

  _putchar('\n');
   
}
