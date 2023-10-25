#include "lists.h"

/**
 * listint_len - print the length of the list
 * @h: pointer to the first node
 * Return: a
*/
size_t listint_len(const listint_t *h)
{
	size_t a = 0;

	while (h)
	{
		h = h->next;
		a++;
	}
	return (a);
}
