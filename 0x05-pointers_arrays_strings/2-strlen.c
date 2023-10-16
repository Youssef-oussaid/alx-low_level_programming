#include "main.h"

/**
 * _strlen - Calculate the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
