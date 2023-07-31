#include <stddef.h>
#include "lists.h"

/**
* listint_len - Returns the number of elements in a linked listint_t list
* @h: Pointer to the head of the listint_t list
* Return: The number of nodes in the list
*/
size_t listint_len(const listint_t *h)
{
	int C = 0;

	while (h != NULL)
	{
		h = h->next;
		C++;
	}
	return (C);
}
