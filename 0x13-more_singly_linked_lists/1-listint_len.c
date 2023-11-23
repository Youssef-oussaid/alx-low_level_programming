#include "lists.h"

/**
 * listint_len - counts the nodes
 * @h: a pointer to a struct
 * Return the num of nodes
*/

size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
