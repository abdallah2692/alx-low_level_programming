#include <stdio.h>
/**
 * main - intery point
 * @argc: the num of the programe path
 * @argv: the string of the pronrame path
 * Return: 0
*/

int main(int argc, char const **argv)
{
	int i;

	(void)argc;

	for (i =0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
