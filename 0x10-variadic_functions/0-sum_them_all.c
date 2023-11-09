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
	unsigned int sum = 0, i;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int ar = va_arg(args, int);

		sum += ar;
	}
	va_end(args);
	return (sum);
}
