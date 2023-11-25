#include "main.h"

/**
 * binary_to_uint - a function
 * @b: a string of numbers
 * Return: the decimal value
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0;
	unsigned int decval = 1;
	unsigned int stringLen = strlen(b);

	if (!b)
		return (0);

	for (int i = 0; i <= stringLen - 1; i++)
	{
		if (*b != '0' && *b != '1')
			return (0);
	}

	for (int i = stringLen - 1; i >= 0; i--)
	{
		if (b[i] != '0')
		{
			total += decval;
		}
		decval *= 2;
	}
	return (total);
}
