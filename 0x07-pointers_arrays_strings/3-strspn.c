#include "main.h"
/**
 * _strspn - fills memory with a constetnt bytes
 * @s: pointer the const
 * @accept: const
 * Return: a
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != s[a]; b++)
		{
			if (accept[b] == '\0')
				return (b);
		}
	}
	return (a);
}
