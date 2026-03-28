
#include <unistd.h>

/**
 *_putchar -writes the character c t stdout 
 * @c: The character to ptint
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appriopriately.
 */

int _putchar(int c)
{
    return (write(1, &c, 1));
}


