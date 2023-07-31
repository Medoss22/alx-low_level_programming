#include "lists.h"

/**
* free_listint2 - Frees a listint_t list
* @head: pointer to the first linked list
*/
void free_listint2(listint_t **head)
{
	listint_t *c;

	if (head == NULL)
	{
		while (*head != NULL)
		{
			c = *head;
			*head = (*head)->next;
			free(c);
		}
	}
}
