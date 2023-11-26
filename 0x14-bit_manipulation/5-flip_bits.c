#include "main.h"

/**
 * flip_bits - returns the number of bits to flip
 * @n: an unsigned int
 * @m: a long int
 * Return: an int
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int compare = n ^ m;
	unsigned long int number = 0;

	while (compare)
	{
		if (compare & 1ul)
			number++;
		compare = compare >> 1;
	}
	return (number);
}
