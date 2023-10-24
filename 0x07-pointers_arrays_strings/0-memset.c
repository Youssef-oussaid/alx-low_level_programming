#include "main.h"

/**
 * _memset - filles a momory with a byte.
 * 
 * @s: a string.
 * @b: a byte character.
 * @n: the counter. 
 * 
 * Return: returns (s).
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = _putchar(b);
	}
	return (s);
}
