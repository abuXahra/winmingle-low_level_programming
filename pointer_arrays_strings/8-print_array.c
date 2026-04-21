#include "main.h"

void print_array(int *a, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        int num = a[i];
        int div = 1;

        /* handle negative numbers */
        if (num < 0)
        {
            _putchar('-');
            num = -num;
        }

        /* find highest power of 10 */
        while (num / div >= 10)
        {
            div *= 10;
        }

        /* print digits */
        while (div > 0)
        {
            _putchar((num / div) + '0');
            num %= div;
            div /= 10;
        }

        if (i < n - 1)
        {
            _putchar(',');
            _putchar(' ');
        }
    }

    _putchar('\n');
}