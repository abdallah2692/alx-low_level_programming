#include "lists.h"

/**
 * print_listint - print the element in the list
 * @h: pointer to the first node
 * Return: a
*/


size_t print_listint(const listint_t *h)
{
	size_t a = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		a++;
	}
	return (a);
}
