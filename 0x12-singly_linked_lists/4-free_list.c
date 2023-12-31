#include "lists.h"

/**
 * free_list - a function that frees a list
 * @head: a pointer to a list
 * Return: void
*/

void free_list(list_t *head)
{
	list_t *current, *next;

	if (!head)
		return;

	current = head;
	while (current)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
