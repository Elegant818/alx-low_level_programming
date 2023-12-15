#include "main.h"

/**
 * _strlen - program return the length of a string
 * @s: string in view
 * Return: lenth in view
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
