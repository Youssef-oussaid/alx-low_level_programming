#include "main.h"

/**
 * binary_to_uint - a function
 * @b: a string of numbers
 * Return: the decimal value
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		total = total * 2 + (*b++ - '0');
	}
	return (total);
}
