#include "lists.h"

/**
* pop_listint - a function that deletes the head node
* @head: pointer to the first node
* Return:c0 if the linked list is empty
*/
int pop_listint(listint_t **head)
{
	listint_t *firstnode = NULL;
	int d = 0;

	d = (*head)->n;
	firstnode = *head;
	*head = (*head)->next;
	free(firstnode);

	return (d);
}
