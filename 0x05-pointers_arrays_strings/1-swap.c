#include "main.h"

/**
 * swap_int - a function that swaps the value of two integers
 *
 * @a: a variable that holds a value
 * @b: another variable
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
