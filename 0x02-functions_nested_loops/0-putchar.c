#include <unistd.h>
/**
 * main- takes no parameters
 * _putchar - writes the character c to stdout
 * Return: returns 0
 */
int _putchar(char c)
{
	write(1, &c , sizeof(message) - 1);
	return (0);
}
