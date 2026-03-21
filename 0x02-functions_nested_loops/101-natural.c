#include <stdio.h>

/**
 * Author: Isah Abdumumin
 * Program: WinMingle Community Training in C	
 * Description: Write a program that computes and prints the sum of all the multiples of 3 or 5 below 104 (Excluded), follow by a new line
 * */

int main(void)
{
   int sum = 0;
   int i;

   for(i = 0; i < 1024; i++)
   {
       if(i % 3 == 0 || i % 5 == 0)
       {
            sum += i;
       }   
   }
    printf("%d\n", sum);

    return 0;
}
