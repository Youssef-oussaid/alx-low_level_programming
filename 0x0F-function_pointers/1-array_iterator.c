#include "function_pointers.h"

/**
 * array_iterator - func
 * @array: array
 * @size: size of array
 * @action: the dunction to be called
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && size && action)
	{
		int i;

		for (i = 0; i <= size; i++)
		{
			action(array[i]);
		}
	}
}
