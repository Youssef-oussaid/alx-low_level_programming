#include "main.h"

/**
 * _memset - a function that sets memory to 0
 * @s: the array to set
 * @b: the value with which to set
 * @n: the number of blocks to set
 * Return: a pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;

	return (ptr);
}

/**
 * _calloc - a function
 * @nmemb: number of memory blocks
 * @size: size of each block
 * Return: a pointer or null
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * sizeof(int));

	if (array == 0)
		return (NULL);

	_memset(array, 0, sizeof(int) * nmemb);

	return (array);
}
