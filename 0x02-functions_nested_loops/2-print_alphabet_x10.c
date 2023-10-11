#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Description: a
 *
 * prints 10 rows of alphabets
 */

void print_alphabet_x10(void)
{
	int alph, line;

	for (line = 0; line <= 9; line++)
	{

		for (alph = 'a'; alph <= 'z'; alph++)
			_putchar(alph);
		_putchar('\n');

	}
}
