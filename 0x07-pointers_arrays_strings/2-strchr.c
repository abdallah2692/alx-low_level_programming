#include "main.h"
/**
 * _strchr - fills memory with a constetnt bytes
 * @s: pointer the const
 * @c: const
 * Return: a
*/

char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
		{
			return (s + a);
		}
	}
	return ('\0');
}
