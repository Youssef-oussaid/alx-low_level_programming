#include "main.h"

/**
 * malloc_checked - function to allocate mem
 * @b: size of memory
 * Return: NULL or b
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == 0)
	{
		exit(98);
	}
	return (ptr);
}
