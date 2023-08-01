#include "lists.h"

/**
* get_nodeint_at_index - returns the node to a certain index
* @head: pointer to the first node
* @index: is the index of the node, starting at 0
* Return: if the node does not exist, return NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *C = head;
	unsigned int numb = 0;

	while (C != NULL)
	{
		if (numb == index)
			return (C);

		C = C->next;
		numb++;
	}
	return (NULL);
}
