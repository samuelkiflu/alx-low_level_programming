#include "main.h"

/**
 * print_number -  a function that prints an integer
 * @n: integer input parameter
 * Return: nothing - void function
 */

void print_number(int n)
{
	int res, temp, expo;

	expo = 1;

	if (n >= 0)
		res = n * -1;
	else
	{
		res = n;
		_putchar('-');
	}

	temp = res;
	while (temp <= -10)
	{
		expo *= 10;
		temp /= 10;
	}
	while (expo >= 1)
	{
		_putchar(((res / expo) % 10) * -1 + '0');
		expo /= 10;
	}
}

