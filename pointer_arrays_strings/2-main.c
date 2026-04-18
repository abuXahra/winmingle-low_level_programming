#include <stdio.h>
#include <string.h>
#include "main.h"

/*
 * Author: Isah Abdulmumin
 * program: WinMingle Community C Training
 * Description: Write a fuction that return the length of a sring
 * */




int main(void)
{ 
	char *str = "My first strlen!";
	int len = strlen(str);
	
	_putchar('0' + (len / 10));
	_putchar('0'+ (len % 10));
	_putchar('\n');


	return 0;
}
