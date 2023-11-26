#include "main.h"

/**
 * get_bit - a function that returns the value of a certain bit
 * @n: a number
 * @index: the position of the bit
 *
 * Return: the value of the bit
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
