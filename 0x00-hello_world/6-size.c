#include <stdio.h>
/**
 * main - variables are first declared
 * main - Prints out the sizes of various data types on the computer
 * Returns: 0
 */
int main(void)
{
	char c;
	int i;
	long l;
	long long lo;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(lo));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}

