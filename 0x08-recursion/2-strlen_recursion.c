#include "main.h"

/**
 * _strlen_recursion - a function
 * @s: string
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i += _strlen_recursion(s + 1) + 1;
	}
	return (i);
}
