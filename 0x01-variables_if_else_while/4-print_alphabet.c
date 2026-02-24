#include <stdio.h>

/*
 * Author: Isah Abdulmumin
 *  Programe: WinMingle Community C Training
 *  Description: Print the alphabet in lowercase except letters q and e, followed by a new line.
 * */


int main(void){

    char ch; 	
    
    for (ch = 'a'; ch <= 'z'; ch++){
       
        if(ch == 'e' || ch == 'q'){
            continue;
         };

	putchar(ch);
	putchar('\n');

    }

    return 0;
}
