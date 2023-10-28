#include "lists.h"

/**
 * add_modeint_end - and a node to the end
 * @head: poin to the first
 * @n: val of new
 * Return: pointer
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *node;

	if (!head || !new)
		return (NULL);
	new->next = n;
	new->n = n;

	if (!*head)
		*head = new;
	else
	{
		node = *head;
		while (node->next)
			node = node->next;
		node->next = new;
	}
	return (new);
}
