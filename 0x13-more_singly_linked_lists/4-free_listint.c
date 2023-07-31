#include "lists.h"

/**
* free_listint - Frees a listint_t list
* @head: pointer to linked list
*/
void free_listint(listint_t *head)
{
	listint_t *c;

	while (head != NULL)
	{
		c = head;
		head =head->next;
		free(c);
	}
}
