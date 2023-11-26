#include "main.h"

/**
 * set_bit - sets a bit of a number
 * @n: a pointer to a number
 * @index: the position of the bit
 * Return: 1 or -1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (!!(*n |= 1L << index));
}
