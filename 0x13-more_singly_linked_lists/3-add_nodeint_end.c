#include "lists.h"

/**
* add_nodeint_end - Adds a new node at the end
* @head: Point the first node
* @n: added to the new node
* Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *c;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	c = *head;
	while (c->next != NULL)
		c = c->next;

	c->next =  node;
	return (node);
}
