#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A string containing the binary number.
 *
 * Return: The converted number, or 0 if there's an invalid input.
 */
unsigned int binary_to_uint(const char *b)
{
	if (!b)
		return (0);
	unsigned int dec_val = 0;

	for (int i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		dec_val = (dec_val << 1) | (b[i] - '0');
	}
	return (dec_val);
}
