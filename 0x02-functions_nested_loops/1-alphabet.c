#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - prints the english alphabet from a-z.
 * Return: returns 0.
 */
void print_alphabet(void)
{
    char c = 'a';

    while (c <= 'z')
    {
       _putchar(c);
        c++;
    }

    putchar('\n');
}
