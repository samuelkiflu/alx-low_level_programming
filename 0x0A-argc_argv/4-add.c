#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
/**
 * checker - checks for valid input
 * @argc: argument count
 * @argv: argument vector
 * Return: (0) on success, (1) on failure
 */

int checker(int argc, char *argv[])
{
	for (int i = 1; i < argc; i++)
	{
	for (unsigned int j = 0; argv[i][j] != '\0'; j++)
	{
		if (!isdigit(argv[i][j]))
		{
		return (1);
		}
	}
	}
	return (0);
}

/**
 * main - adds all arguments together if they are digits.
 * @argc: argument count only accepts ints separated by spaces.
 * @argv: argument vector
 * Return: (0) on success, (1) on failure
 */

int main(int argc, char *argv[])
{
	int result = 0;

	if (argc < 2 || checker(argc, argv) == 1)
	{
		printf("Error\n");
		return (1);
	}
	for (int i = 1; i < argc; i++)
	{
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
