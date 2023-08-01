#include "lists.h"

/**
 * sum_listint - returns the sum of all the data
 * @head: pointer to the first node
 * Return: if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	listint_t *C = head;
	int S = 0;

	C = head;
	while (C->next)
	{
		C = C->next;
		S += C->n;
	}
	return (S);
}
