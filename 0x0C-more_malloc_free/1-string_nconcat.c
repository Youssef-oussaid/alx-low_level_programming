#include "main.h"
#include <stdio.h>

/**
 * string_nconcat - function
 * @s1: pointer
 * @s2: pointer
 * @n: integer
 * Return: a pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, length1, length2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (length1 = 0; s1[length1] != '\0'; length1++)
		;
	for (length2 = 0; s2[length2] != '\0'; length2++)
		;

	str = malloc(length1 + n + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; s[i] != '\0'; i++)
		str[i] = s1[i];

	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}
