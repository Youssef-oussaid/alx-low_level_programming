#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a node at the end of a list
 * @head: a ptr to a ptr of struct
 * @str: a string value in the node
 * Return: an address or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = NULL;

	temp = (list_t *)malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;

	return (temp);
}
