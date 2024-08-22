#include "lists.h"

/**
 * delete_nodeint_at_index - and a node to the end
 * @head: poin to the first
 * @index: new node
 * Return: nothimg
*/


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *prev_node;
	unsigned int a = 0;

	if (!head || !*head)
		return (-1);
	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}
	node = *head;
	while (node)
	{
		if (a == index)
		{
			prev_node->next = node->next;
			free(node);
			return (1);
		}
		a++;
		prev_node = node;
		node = node->next;
	}
	return (-1);
}
