#include "main.h"
/**
 * print_rev - a function that prints  a string, in reverse,
 * followed by a new line.
 * @s: string parameter
 * return: nothing. it is a void function
 */
void print_rev(char *s)
{
	int abc = 0;
	int bca;

	while (*s != '\0')
	{
		abc++;
		s++;
	}
	s--;
	for (bca = abc; bca > 0; bca--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
