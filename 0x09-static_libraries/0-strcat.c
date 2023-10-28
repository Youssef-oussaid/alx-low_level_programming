#include "main.h"

/**
 * _strcat - Concatenate two strings.
 * @dest: the output of the two strings.
 * @src: the input of the two strings.
 *
 * Return: A pointer to the concatenated string (dest).
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int l = 0;

	while (dest[l] != '\0')
	{
		l++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[l + i] = src[i];
	}
	return (dest);
}
