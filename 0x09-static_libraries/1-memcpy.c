#include "main.h"
/**
 * _memcpy - copy memory area
 * @dest: memory saved
 * @src:  memory source
 * @n: entered value
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		dest[x] = src[x];

	return (dest);
}
