#include <stdio.h>
#include <string.h>
#include "main.h"

int main(void)
{ 
	char *str = "My first strlen!";
	int len = strlen(str);
	
	_putchar('0' + (len / 10));
	_putchar('0'+ (len % 10));
	_putchar('\n');


	return 0;
}
