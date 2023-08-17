#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: number of arguments
 * @...: variable list of arguments
 *
 * Return: 0 if n = 0 otherwise sum of all arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;

	sum = 0;
	va_list ap;

	if (n == 0)
		return (0);

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
