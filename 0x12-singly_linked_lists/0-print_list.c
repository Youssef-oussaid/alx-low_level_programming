#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints the content of a list
 * @h: a pointer to a struct of type list_t
 * Return: 0
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *temp = h;

	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", _strlen(temp->str), temp->str);
		}
		temp = temp->next;
		count++;
	}
	return (count);
}
