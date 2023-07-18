#include "main.h"

/**
 * print_alphabet - print all alphabets in lowercase(a-z)
 * Return:returns nothing - void function
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
{
	_putchar(letter);
}
	_putchar('\n');
}
