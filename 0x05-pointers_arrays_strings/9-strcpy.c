#include "main.h"

/**
 * _strcpy - Copies a string from the source to the destination.
 *
 * @dest: A pointer to the destination string.
 * @src: A pointer to the source string.
 *
 * Return: A pointer to the destination string (same as dest).
 */

char *_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (dest);
}
