#include "main.h"

/**
 * _strpbrk - a function.
 * @s: a pointer.
 * @accept: a pointer.
 * Return: an address (i).
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p = NULL;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}
	return (p);
}
