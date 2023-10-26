#include "main.h"

/**
 * _sqrt_recursion - function
 * @n: value
 * @val: value
 * Return: n
 */

int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - a function
 * @n: value
 * @val: value
 * Return: val
 */

int square(int n, int val)
{
	if (val * val == n)
		return (val);
	if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}

