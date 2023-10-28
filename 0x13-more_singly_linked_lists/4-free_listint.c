#include "lists.h"

/**
 * free_listint - and a node to the end
 * @head: poin to the first
 * Return: nothing
*/

void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
