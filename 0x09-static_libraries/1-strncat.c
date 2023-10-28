#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 *
 * @dest: a pointer that will store the strings.
 * @src: a pointer that will input the strings.
 * @n: number of bytes allocated.
 * Return: returns the value of (dest).
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[j + i] = src[j];
	}

	dest[j + i + 1] = '\0';

	return (dest);
}
