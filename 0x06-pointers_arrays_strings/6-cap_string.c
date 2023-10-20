#include "main.h"

/**
 * cap_string - capitalizes the first letter of every word.
 *
 * @str: a string array.
 *
 * Return: returns (ptr).
 */

char *cap_string(char *str)
{
	char  *ptr = str;
	int foundDelimiter = 1;

	while (*str)
	{
		if (isDelimiter(*str))
			foundDelimiter = 1;
		else if (isLower(*str) && foundDelimiter)
		{
			*str -= 32;
			foundDelimiter = 0;
		}
		else
			foundDelimiter = 0;
		str++;
	}
	return (ptr);
}

/**
 * isLower - checks whether a character is lower case.
 *
 * @c: a variable of a character.
 *
 * Return: returns (c).
 */

int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDelimiter - check for a set of characters.
 *
 * @c: a variable of a chaacter.
 *
 * Return: returns (0) or (1);
 */

int isDelimiter(char c)
{
	int i;
	char delimiter[] = " \t\n,.!?\"{}()";

	for (i = 0; i < 12; i++)
		if (c == delimiter[i])
			return (1);
	return (0);
}
