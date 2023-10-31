#include "main.h"

/**
 * _strdup - a function to duplicate a string
 * @str: a string
 * Return: a pointer
 */

char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *m;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
	;

	m = malloc(size * sizeof(*str) + 1);

	if (m == 0)
		return (NULL);

	else
	{
		for (; i < size; i++)
			m[i] = str[i];
	}
	return (m);
}
