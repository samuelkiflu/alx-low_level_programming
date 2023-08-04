#include "main.h"
/**
 * _puts - a function that prints a string, followed by a new line.
 * @str: input string to print.
 * Return: nothing. it is a void function
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}


