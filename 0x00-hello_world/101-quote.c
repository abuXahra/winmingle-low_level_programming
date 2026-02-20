#include <unistd.h>

/*
 * Author: Isah Abdulmumin
 * Program: WinMingle Community C Training
 * Description: C code that print a line of text without using prinf and puts function
 * */

int main(void)
{
    char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    write(2, str, 59);

    return (1);
}
