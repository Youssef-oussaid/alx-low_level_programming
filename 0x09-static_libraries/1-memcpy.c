#include "main.h"

/**
 * _memcpy - copies an array.
 * @dest: destination
 * @src: source
 * @n: the counter
 * Return: (dest)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
