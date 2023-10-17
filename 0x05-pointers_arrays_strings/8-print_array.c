#include "main.h"

/**
 * print_array - prints the content of an array
 *
 * @a: holds an int
 *
 * @n: holds the number of indexes
 *
 * return: always 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
}
