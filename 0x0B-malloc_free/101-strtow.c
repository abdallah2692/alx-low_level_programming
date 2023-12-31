#include "main.h"
/**
 * wrdcnt - count the num of words in a string
 * @s: string
 * Return: num
*/

int wrdcnt(char *s)
{
	int a, b = 0;

	for (a = 0; s[a]; a++)
	{
		if (s[a] == ' ')
		{
			if (s[a + 1] != ' ' && s[a + 1] != '\0')
				b++;
		}
		else if (a == 0)
			b++;
	}
	b++;
	return (b);
}



/**
 * strtow - split a string into words
 * @str: pointer to a string
 * Return: NULL or space
*/
char **strtow(char *str)
{
	int a, b, c, d, e = 0, f = 0;
	char **w;

	if (str == NULL || *str == '\0')
		return (NULL);
	e = wrdcnt(str);
	if (e == 1)
		return (NULL);
	w = (char **)malloc(e * sizeof(char *));
	if (w == NULL)
		return (NULL);
	w[e - 1] = NULL;
	a = 0;
	while (str[a])
	{
		if (str[a] != ' ' && (a == 0 || str[a - 1] == ' '))
		{
			for (b = 1; str[a + b] != ' ' && str[a + b]; b++)
				;
			b++;
			w[f] = (char *)malloc(b * sizeof(char));
			b--;
			if (w[f] == NULL)
			{
				for (c = 0; c < f; c++)
					free(w[c]);
				free(w[e - 1]);
				free(w);
				return (NULL);
			}
			for (d = 0; d < b; d++)
				w[f][d] = str[a + d];
			w[f][d] = '\0';
			f++;
			a += b;
		}
		else
			a++;
	}
	return (w);
}

