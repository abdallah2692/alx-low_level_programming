#include "main.h"
/**
 * _strpbrk - fills memory with a constetnt bytes
 * @s: pointer the const
 * @accept: const
 * Return: check the content of the accept bytes matchs or not
*/

char *_strpbrk(char *s, char *accept)
{
	int a, b;
	char *p;

	a = 0;
	while (s[a] != '\0')
	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (accept[b] == s[a])
			{
				p = &s[a];
				return (p);
			}
			b++;
		}
		a++;
	}
	return (0);
}
