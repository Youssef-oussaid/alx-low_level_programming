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
	int i;
	int value1 = 0, value2 = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		value1 += s1[i];
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		value2 += s2[i];
	}
	return (value1 - value2);
}
