#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - a function to create an array
 * @size: the size of the array
 * @c: a char
 * Return: a pointer to the array or NULL.
 */

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);

	while (size--)
		n[size] = c;

	return (n);
}
