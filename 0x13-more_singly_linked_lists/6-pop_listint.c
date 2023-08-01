#include "lists.h"

/**
 * pop_listint - function deletes the head node of linked list
 * @head: pointer to the first node in linked lis.
 * Return: the head node’s data
 * 0 if it empty
 */
int pop_listint(listint_t **head)
{
	listint_t *firstnode = NULL;
	int D = 0;

	D =  (*head)->n;
	firstnode = *head;
	*head = (*head)->next;
	free(fr_firstnode);

	return (D);
}
