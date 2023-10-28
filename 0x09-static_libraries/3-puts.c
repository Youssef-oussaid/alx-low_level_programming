#include "main.h"

/**
 * _puts - prints a string
 *
 * @str: stores a string
 *
 * return: Always 0
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
