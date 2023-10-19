#include "main.h"

/**
 * reverse_array - a function that reverses ana array.
 *
 * @a: the numbers in an array.
 * @n: the number of integers in an array.
 *
 * return: always 0
 */

void reverse_array(int *a, int n)
{
	int i, j, t;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}
