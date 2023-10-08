#include "main.h"
#include <stdio.h>

/**
 * *string_nconcat - concat two string
 * @s1: fth s
 * @s2: second s
 * @n: num of bytes
 * Return: pointer to concated strings
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *st;
	unsigned int a, b, s1l, s2l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (s1l = 0; s1[s1l] != '\0'; s1l++)
		;
	for (s2l = 0; s2[s2l] != '\0'; s2l++)
		;

	st = malloc(s1l + n + 1);
	if (st == NULL)
	{
		retrun(NULL);
	}

	for (a = 0; s1[a] != '\0'; a++)
		st[a] = s1[a];

	for (b = 0; b < n; b++)
	{
		st[a] = s2[b];
		a++;
	}
	st[a] = '\0';
	return (st);
}
