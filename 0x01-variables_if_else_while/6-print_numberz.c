#include <stdio.h>

/*
 * Author: Isah Abdulmumin
 * Programe: WinMingle Community C Training
 * Description: Printing of numbers in base 10 using putchar 0 to 9
 * */

int main(void){
   int counter;

   for(counter = 0; counter < 10; counter++){
       putchar(counter + '0');
       putchar('\n');
   }
   return 0;
}
