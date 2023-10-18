#include <stdio.h>
#include <stdlib.h>
/**
 * main - intery point
 * @argc: the num of the programe path
 * @argv: the string of the pronrame path
 * Return: 0
*/

int main(int argc, char const **argv)
{
	if (argc == 3)
	{
		int mult1 = atoi(argv[1]);
		int mult2 = atoi(argv[2]);
		printf("%d\n", mult1 * mult2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
