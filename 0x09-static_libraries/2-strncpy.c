#include "main.h"

/**
 * _strncpy - copies a string.
 *
 * @dest: a pointer to which the string will be stored.
 * @src: a pointer that stores the string to be copied.
 * @n: the number of bytes to be allocated
 *
 * Return: wil return the value of (dest).
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
