#include "main.h"
/**
 * _strdup - return a duplicated string
 * @str: the duplicated string
 * Return: 0
*/

char *_strdup(char *str)
{
	int a = 0, size = 0;
	char *s;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
	;
	s = malloc(size * sizeof(*str) + 1);

	if (s == 0)
	{
		return (NULL);
	}
	else
	{
		for (; a < size; a++)
			s[a] = str[a];
	}
	return (s);
}
