#include "lists.h"
/**
 * list_len - length of the list
 * @h: pointer
 * Return: size
*/

size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		h = h->next;
		a++;
	}
	return (a);
}
