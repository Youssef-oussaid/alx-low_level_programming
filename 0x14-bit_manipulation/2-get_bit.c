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
	unsigned int value = 0;

	if (n == NULL || index == NULL)
		return (-1);
	else
	{
		value = (n>>index) & 1;
		return (value);
	}
}
