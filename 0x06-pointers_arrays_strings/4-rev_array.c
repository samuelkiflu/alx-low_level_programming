#include "main.h"
/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: an array of integers
 * @n: number of elements of array
 * Return: nothing. it is a void function
 */
void reverse_array(int *a, int n)
{
	int i;
	int b;

	for (i = 0; i < n--; i++)
	{
		b = a[i];
		a[i] = a[n];
		a[n] = b;
	}
}
