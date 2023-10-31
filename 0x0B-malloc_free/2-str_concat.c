#include "main.h"

/**
 * str_concat - a function that concatenates strings
 * @s1: string one
 * @s2: string two
 * Return: a pointer to a string
 */

char *str_concat(char *s1, char *s2)
{
	int size1 = 0, size2 = 0;
	char *n;

	while (s1[size1] != '\0')
		size1++;

	while (s2[size2] != '\0')
		size2++;

	n = malloc((size1 + size2) * sizeof(char) + 1);

	if (n == NULL)
		return (NULL);

	else
	{
		int i;

		for (i = 0; i < size2; i++)
		{
			int j;

			for (j = 0; j < size1; j++)
			{
				n[j] = s1[j];
			}
		n[i + j] = s2[i];
		}
	}
	return (n);
}
