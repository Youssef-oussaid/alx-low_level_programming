#include "main.h"

/**
 * _strchr - searches for a char.
 * @s: a string.
 * @c: a character.
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (0);
}
