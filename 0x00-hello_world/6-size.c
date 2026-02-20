#include <stdio.h>

/*
 * Author: Isah Abdulmumin
 * Program: WinMingle Community C Training
 * Description: Printing size of data-types
 */

int main(void)
{
    int a;
    char b;
    double c;
    float d;
    long int e;
    long long int f;
    
    printf("Size of int is: %lu \n", sizeof(a));
    printf("Size of char is: %lu \n", sizeof(b));
    printf("Size of double is: %lu \n", sizeof(c));
    printf("Size of float is: %lu \n", sizeof(d));
    printf("Size of long is: %lu \n", sizeof(e));
    printf("Size of long long is: %lu \n", sizeof(f));

  return 0;
}
