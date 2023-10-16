#include "main.h"

/**
 * rev_string - to reverse a string
 *
 * @s: stores a string
 *
 * return: always 0
 */

void rev_string(char *s)
{
	int i;

	for (i = 9; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
