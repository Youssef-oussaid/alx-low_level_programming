#include "main.h"

/**
 * _isupper - function
 * @c: a char
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (0);
	return (0);
}
