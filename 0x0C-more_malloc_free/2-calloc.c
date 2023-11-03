#include "main.h"

/**
 * _calloc - a function
 * @nmemb: number of memory blocks
 * @size: size of each block
 * Return: a pointer or null
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i;
	char *array;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = (char *)malloc(nmemb * size);

	if (array == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < (nmemb * size); i++)
		{
			array[i] = 0;
		}
	}
	return (array);
}
