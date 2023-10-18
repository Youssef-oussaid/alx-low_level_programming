#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 *
 * @s1: a pointer that stores the first string.
 *
 * @s2: a pointer that stores the second string.
 *
 * Return: always 0.
 */

int _strcmp(char *s1, char *s2)
{
	int res = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			res = ((int) *s1 - 48) - ((int) *s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (res);
}
