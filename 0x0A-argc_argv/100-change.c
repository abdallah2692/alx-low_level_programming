#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: num the intered args
 * @argv: pointer to intered args
 * Return: 0 or non
*/
int main(int argc, const char *argv[])
{
	if (argc == 2)
	{
		int i, l = 0, m = atoi(argv[1]);
		int cent[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (m >= cent[i])
			{
				l += m / cent[i];
				m = m % cent[i];
				if (m % cent[i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", l);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
