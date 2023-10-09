#include "main.h"

/**
 * *_memset - fills memory
 * @s: pointer
 * @a: const
 * @n:bytes
 * Return: pointer s
*/

void *_memset(char *s, char a, unsigned int n)
{
	char *p = s;

	while (n--)
		*s++ = a;

	return (p);
}

/**
 * *_calloc - allocate memory
 * @nmemb: length of array
 * @size: size of element
 * Return: a pointer
*/



void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *d;

	if (size == 0 || nmemb == 0)
		return (NULL);
	d = malloc(size * nmemb);
	if (d == 0)
		return (NULL);

	_memset(d, 0, size * nmemb);
	return (d);
}
