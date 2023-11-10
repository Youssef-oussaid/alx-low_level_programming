#include "function_pointers.h"

/**
 * print_name - a function
 * @name: a string
 * @f: a pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
