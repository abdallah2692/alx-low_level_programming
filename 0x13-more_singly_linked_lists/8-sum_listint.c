#include "lists.h"

/**
 * sum_listint - and a node to the end
 * @head: poin to the first
 * Return: nothimg
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
