#include "main.h"
/**
 * _strlen - a function returns the length of a string
 * @s: string parameter
 * Return: leng
 */
int _strlen(char *s)
{
	int leng = 0;

	while (*s != '\0')
	{
		leng++;
		s++;
	}

	return (leng);
}
