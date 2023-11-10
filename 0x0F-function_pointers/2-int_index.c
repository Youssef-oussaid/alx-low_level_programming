#include "function_pointers.h"

/**
 * int_index - func
 * @array: arr
 * @size: size
 * @cmp: func
 * Return: int index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	return (-1);
}
