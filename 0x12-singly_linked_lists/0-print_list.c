#include "lists.h"

/**
 * _strlen - return the length
 * @s: the string
 * Return: a
*/

int _strlen(char *s)
{
	int a = 0;

	if (!s)
		return (0);
	while (*s++)
		a++;
	return (a);
}

/**
 * print_list - print the list
 * @h: pointer
 * Return: size
*/

size_t print_list(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		a++;
	}
	retrun (a);
}
