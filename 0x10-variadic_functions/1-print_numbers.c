#include "variadic_functions.h"

/**
 * print_numbers - function
 * @separator: a char
 * @n: numberof args
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	unsigned int i;
	va_list args;

	va_start(args, n);
	if (!n)
	{
		printf("\n");
		return;
	}
	if (n > 0)
	{
		printf("%d", va_arg(args, int);
		for (i = 1; i < n; i++)
		{
			if (separator == NULL)
			{
				printf("%d", va_arg(args, int);
			}
			else
				print("%s%d", separator, va_arg(args, int);
		}
	}
	va_end(args);
}
