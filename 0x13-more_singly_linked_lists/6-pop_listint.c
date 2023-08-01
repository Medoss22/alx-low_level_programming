#include "lists.h"

/**
 * pop_listint - function deletes the head node of linked list
 * @head: pointer to the first node in linked lis.
 * Return: the head node’s data
 * 0 if it empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
