#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints the content of a list
 * @h: a pointer to a struct of type list_t
 * Return: 0
 */

size_t print_list(const list_t *h)
{
	int count = 0;
	const list_t *temp = h;
	
	if (temp->str == NULL)
	{
		printf("[0] (nil)");
		exit(0);
	}

	while (temp != NULL)
	{
		printf("[%d] %s\n", temp->len, temp->str);
		temp = temp->next;
		count++;
	}
	return (count);
}
