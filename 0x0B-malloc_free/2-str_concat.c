#include "main.h"

/**
 * _strlen - find length
 * @a: pointer of char
 * Return: int
*/

int _strlen(char *a)
{
	int size = 0;

	for (; a[size] != '\0'; size++)
	;
	return (size);
}



/**
 * str_concat - concatenates two strings
 * @s1: pointer 1
 * @s2: pointer 2
 * Return: return s
*/


char *str_concat(char *s1, char *s2)
{
	int size1, size2, n;
	char *s;

	if (s1 == NULL)
		s1 ="\0";
	if (s2== NULL)
		s2 = "\0";

	size1 = _strlen(s1);
	size2 = _strlen(s2);
	s = malloc((size1 + size2) * sizeof(char) + 1);
	if (s == 0)
		return (0);
	for (n = 0; n <= size1 + size2; n++)
	{
		if (n < size1)
			s[n] = s1[n];
		else
			s[n] = s2[n - size1];
	}
	s[n] = '\0';
	return (s);
}
