#include "main.h"
/**
 * _memcpy - fills memory with a constetnt bytes
 * @dest: memory area
 * @src: source
 * @n: length of src
 * Return: a
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
