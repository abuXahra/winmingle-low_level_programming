#include <unistd.h>

int _putchar(int n)
{
    return (write(1, &n, 1));
}
