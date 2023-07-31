#include "lists.h"

/**
 * @head: pointer to the first node.
 * @index: is the index of the node, starting at 0
 * Return: if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = NULL;

	node = head;
	while (index)
	{
		node = node->next;
		index--;
	}
	return (node);
}
