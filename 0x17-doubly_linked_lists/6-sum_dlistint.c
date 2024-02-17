#include "lists.h"
/**
 * sum_dlistint - sums data in list
 * @head: a pointer to a list
 * Return: the sum
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
