#include "lists.h"

/**
 * add_nodeint - adds a node
 * @head: a pointer to a struct
 * @n: the value of the new node
 * Return: pointer or NULL
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new_node = malloc(sizeof(listint_t));
    listint_t *nodePtr;

    if (new_node == NULL || nodePtr == NULL)
        return (NULL);

    if (!head || !n)
        return (NULL);
    nodePtr = *head;
    new_node->n = n;
    new_node->next = nodePtr;
    *head = new_node;
    return (new_node);
}
