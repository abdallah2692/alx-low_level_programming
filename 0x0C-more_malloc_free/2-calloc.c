#include "main.h"

/**
 * *memset - fills memory
 * @s: pointer
 * @b: const
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
 * @nmemd: length of array
 * @size: size of element
 * Return: a pointer
*/



void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *d;

	if (size == 0 || nmemb == 0)
		return (NULL);
	d = malloc(sizeof(int) * nmemb);
	if (d == 0)
		return (NULL);

	_memset(d, 0, sizeof(int) * nmemb);
	return (d);
}
