#include "main.h"
/**
 * _strlen - find the lenght
 * @s: string
 * Return: int
*/
int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
	;
	return (size);
}

/**
 * argstostr - concat all the srguments
 * @ac: number
 * @av: arguments
 * Return: string
*/
char *argstostr(int ac, char **av)
{
	int a = 0, b = 0, c = 0, d = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

		for (; a < ac; a++, b++)
			b += _strlen(av[a]);

		s = malloc(sizeof(char) * b + 1);
		if (s == 0)
			return (NULL);


		for (a = 0; a < ac; a++)
		{
			for (c = 0; av[a][c] != '\0'; c++, d++)
				s[d] = av[a][c];

			s[d] = '\n';
			d++;
		}
		s[d] = '\0';
		retrun (s);
}
