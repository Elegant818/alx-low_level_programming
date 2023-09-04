#include <string.h>
#include "main.h"


/**
 * _strncat - add two string by character number
 * @dest: to copy to
 * @src: to copy from
 * @n: string number to be joined
 *
 * Return: desk
 */
char *_strncat(char *dest, char *src, int n)
{
	int c;
	int d;

	c = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	d = 0;
	while (d < n && src[d] != '\0')
	{
	dest[c] = src[d];
	c++;
	d++;
	}
	dest[c] = '\0';
	return (dest);
}
