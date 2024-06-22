#include "main.h"
/**
 * _memset - fills memory with a constetnt bytes
 * @s: pointer the const
 * @b: const
 * @n: maximume bytes
 * Return: a
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; n > 0; a++, n--)
	{
		s[a] = b;
	}
	return (s);
}
