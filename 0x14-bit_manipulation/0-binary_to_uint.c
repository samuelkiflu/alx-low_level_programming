#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A string containing the binary number.
 *
 * Return: The converted number, or 0 if there's an invalid input.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec_val = 0;

	if (!b)
		return (0);
	for (int i, i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[i] - '0');
	}

	return (dec_val);
}
