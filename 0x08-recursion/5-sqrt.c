#include <math.h>

int _sqrt_recursion(int n)
{
    int result = sqrt(n);

    if ((result * result) != n)
	    return -1;

    return result;
}
