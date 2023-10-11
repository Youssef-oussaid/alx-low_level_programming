#include "main.h"

/**
 * print_sign - a function that prints the signs of input
 *
 * @n: stores the input
 *
 * Return: returns 0 or 1 or -1 depending on the input
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
