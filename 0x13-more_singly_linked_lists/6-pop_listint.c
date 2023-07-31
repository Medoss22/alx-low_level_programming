#include "lists.h"

/**
 * pop_listint -  a function that deletes the head node of a listint_t
 *                        linked list,
 * @head: pointer to the first node in linked list.
 * Return: the head node’s data (n), 0 if it empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *firstnode = NULL;
	int data = 0;

	data =  (*head)->n;
	firstnode = *head;
	*head = (*head)->next;
	free(firstnode);

	return (data);
}
