#include <stdio.h>
#include "lists.h"

/**
 * list_len - it counts lists
 * @h: a pointer to a struct
 * Return: the lenght
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
