#include "main.h"

/**
 * _abs - a function
 * @int: integer
 * Return: an int
 */

int _abs(int num)
{
	if (num < 0)
		num = -num;
	if (num >= 0)
		num = num;
	return (num);
}
