#include "lists.h"

/**
 * free_listint2 - and a node to the end
 * @head: poin to the first
 * Return: nothimg
*/
void free_listint2(listint_t **head)
{
	listint_t *node, *he;

	if (!head)
		return;
	node = *head;
	while (node)
	{
		he = node;
		node = node->next;
		free(node);
	}
	*head = NULL;
}
