#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Author: Isah Abdulmumin
 * Program: WinMingle Community C Training
 * Description: Create a program that generate a random valid passwords for a crackme program. tive
 * */

int main(void)
{
    int i;
    char password[16];

    srand(time(NULL));

    for (i = 0; i < 15; i++)
    {
        password[i] = 33 + rand() % 94; /* printable ASCII */
    }

    password[15] = '\0';

    printf("%s\n", password);

    return 0;
}
