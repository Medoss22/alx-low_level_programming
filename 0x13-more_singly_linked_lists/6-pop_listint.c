#include "lists.h"

/**
* pop_listint - a function that deletes the head node of a listint_t
* @head: pointer to the first node
* Return: the head node’s data (n), 0 if it empty
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
