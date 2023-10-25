#include "lists.h"

/**
 * add_nodeint - add node in the list
 * @head: pointer to the first node
 * @h: the value of the new one
 * Return: a
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	if (!head || !new)
		return (NULL);

	new->next = NULL;
	new->n = n;
	if (*head)
		new->next = *head;
	*head = new;
	return (new);
}
