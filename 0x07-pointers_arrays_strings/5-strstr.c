#include "main.h"
/**
 * _strstr - a function that locates a substring
 * @haystack: string to look though
 * @needle: substring to find
 * Return: pointer to string with result of search otherwise 0 if not found
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}

