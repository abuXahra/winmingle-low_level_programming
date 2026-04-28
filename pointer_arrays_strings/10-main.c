#include "main.h"
#include "stdio.h"

int main(void)
{

    char *str;
   
    str = "98";
    printf("%d \n",_atoi(str));

     str = "-402";
     printf("%d \n", _atoi(str));

    str = "-98";
    printf("%d \n", _atoi(str));

    str = "214748364";
    printf("%d \n", _atoi(str));

    str = "0";
     printf("%d \n",  _atoi(str));

    str = "402";
     printf("%d \n",  _atoi(str));

    str = "98";
    printf("%d \n",  _atoi(str));

    str = "402";     
    printf("%d \n",  _atoi(str));

    return 0;
}
