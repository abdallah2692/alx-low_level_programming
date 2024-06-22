#include "main.h"
#include <stdio.h>
/**
 * _strstr - fills memory with a constetnt bytes
 * @haystack: pointer the const
 * @needle: const
 * Return: a
*/

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		char *p1 = haystack;

		char *p2 = needle;

		while (*p2 != '\0' && *p1 == *p2)
		{
			p1++;
			p2++;
		}
		if (*p2 == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
/**
 * main - intery point
 * Return: 0
*/
int main(void)
{
	char haystack[] = "Hello, world!";
	char needle[] = "world";
	char *result = _strstr(haystack, needle);

	if (result != NULL)
	{
		printf("%lld\n", (long long int)(result - haystack));
	} else
	{
		printf("not found\n");
	}

	return (0);
}
