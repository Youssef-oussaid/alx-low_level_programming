#include "main.h"

/**
 * malloc_checked - function to allocate mem
 * @b: size of memory
 * Return: NULL or b
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b * sizeof(int));
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
