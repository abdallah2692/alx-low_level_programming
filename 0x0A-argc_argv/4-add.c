#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * main - intery point
 * @argc: the num of the programe path
 * @argv: the string of the pronrame path
 * Return: 0
*/

int main(int argc, char const **argv)
{
	int mult1 = atoi(argv[1]);
	int mult2 = atoi(argv[2]);
	int i;
	size_t j;
	if (argc != 3)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < strlen(argv[i]); j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", mult1 + mult2);
	return (0);
}
