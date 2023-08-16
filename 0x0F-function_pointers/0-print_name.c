#include "function_pointers.h"
/**
  * print_name - a function that prints a name
  * @name: input string
  * @f: function pointer casted to char pointer
  * Return- nothing
  */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	(*f)(name);
}

