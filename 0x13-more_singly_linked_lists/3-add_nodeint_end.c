#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of the a list
 * @head: a ptr to a pointer of a struct
 * @n: a value to store in the new node
 * Return: a pointer to the new node or NULL
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new_node = malloc(sizeof(listint_t));
    listint_t *nodePtr = NULL;

    if (new_node == NULL)
        return (NULL);

    new_node->n = n;
    new_node->next = NULL;

    nodePtr = *head;
    while (nodePtr->next != NULL)
    {
        nodePtr = nodePtr->next;
    }
    nodePtr->next = new_node;

    if (*head == NULL)
        *head = new_node;
    return (new_node);
}