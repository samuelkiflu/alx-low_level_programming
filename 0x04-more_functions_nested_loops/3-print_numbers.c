#include "main.h"

/**
 * print_numbers - prints the numbers 0 to 9 followed by a new line.
 *
 * Return: nothing. it is void function
 */

void print_numbers(void)
{
 	int c;

	 for (c = 48; c < 58; c++)
 	{
 	_putchar(c);
 	}
 	_putchar('\n');
}
