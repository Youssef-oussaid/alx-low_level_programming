#include "lists.h"

/**
 * add_dnodeint - adds node
 * @head: address
 * @n: int
 * Return: Address
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!head || !new)
		return (new ? free(new), NULL : NULL);

	new->n = n;
	new->prev = NULL;
	if (!*head)
	{
		*head = new;
		new->next = NULL;
	}
	else
	{
		new = *head;
		while (node->next)
            node = node->next;

        node->next = node;
        new->prev = node;
    }
	return (new);
}
