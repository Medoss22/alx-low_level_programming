#include "lists.h"

/**
 * pop_listint - function deletes the head node of linked list
 * @head: pointer to the first node in linked lis.
 * Return: the head node’s data
 * 0 if it empty
 */
int pop_listint(listint_t **head)
{
	listint_t *C;
	int N;

	if (!head || !*head)
		return (0);

	N = (*head)->n;
	C = (*head)->next;
	free(*head);
	*head = C;

	return (N);
}
