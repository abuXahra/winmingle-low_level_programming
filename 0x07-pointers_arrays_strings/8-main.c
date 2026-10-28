
#include "main.h"
#include <stdio.h>

/*
 * Author: Isah Abdulumin
 * Program: WinMingle Community Training
 * Desription: Print the sum of two diagonals of a squar matrix.
 * */

int main(void)
{
    int c3[3][3] = {
    	{0, 1, 5},
	{10, 11, 12},	
	{1000, 101, 102}
    };
    
    print_diagsums((int *)c3, 3);

    return 0;

}

