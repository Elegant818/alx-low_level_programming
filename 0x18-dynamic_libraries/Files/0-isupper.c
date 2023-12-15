#include "main.h"
/**
 * _isupper - function to check for uppercase letters
 * @c: char to check
 * Return: Always o.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
