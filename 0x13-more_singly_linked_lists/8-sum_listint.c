#include "lists.h"

/**
 * sum_listint - returns the sum of all the data
 * @head: pointer to the first node
 * Return: if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *T = head;

	while (T)
	{
		sum += T->n;
		T = T->next;
	}

	return (sum);
}
