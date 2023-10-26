#include <unistd.h>

/**
 * _putchar - write down  the character c to standardout
 * @c: The character to print
 *
 * Return: Return (1) On success.
 * On error, -1 is returned.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

