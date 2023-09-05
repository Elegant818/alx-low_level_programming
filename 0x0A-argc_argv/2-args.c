#include "main.h"
#include <stdio.h>

/**
 * main - prints all the arguments it recieved
 *
 * @argc: number of arguments it recieved
 * @argv: array of program arguments
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int m;

	for (m = 0 ; m < argc ; m++)
		printf("%s\n", argv[m]);

	return (0);
}
