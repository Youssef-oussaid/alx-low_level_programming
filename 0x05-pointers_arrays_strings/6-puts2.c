#include "main.h"

/**
 * puts2 - prints every other character
 *
 * @str: stores a string
 *
 * return: always 0
 */

void puts2(char *str)
{
	for (int i = 0; str[i] != '\0'; ++i)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
