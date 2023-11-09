#include "variadic_functions.h"

/**
 * sum_them_all - a function that sums nums
 *
 * @n: the number of arguments
 *
 * Return: the sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}
	va_list args;
	unsigned int sum = 0, i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int ar = va_arg(args, int);

		sum += ar;
	}
	va_end(args);
	return (sum);
}
