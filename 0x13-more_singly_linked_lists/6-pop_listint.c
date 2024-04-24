#include "lists.h"

/**
 * pop_listint - and a node to the end
 * @head: poin to the first
 * Return: nothimg
*/

int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (!head || !*head)
		return (0);

	node = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = node;
	return (n);
}
