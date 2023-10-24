#include "main.h"

/**
 * _memset - filles a momory with a byte.
 * @s: a string.
 * @b: a byte character.
 * @n: the counter.
 * Return: returns (s).
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
