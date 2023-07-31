#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_nodeint: Adds a new node at the beginning of a listint_t list
* @head: Pointer to a pointer to the head of the listint_t list
* @n: The value to be added to the new node
* Return: The address of the new element, or NULL if it failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node = NULL;

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->next = NULL;

	n_node->next = *head;
	*head = n_node;

	return (*head);
}
