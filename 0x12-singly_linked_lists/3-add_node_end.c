#include "lists.h"

/**
 * add_node_end - adds a node to the end of the list
 * @head: pointer to a struct
 * @str: a string
 *
 * Return: a pointer to the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = (list_t *)malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		list_t *lastnode = *head;

		while (lastnode->next != NULL)
			lastnode = lastnode->next
		lastnode->next = temp;
	}
	return (temp);
}
