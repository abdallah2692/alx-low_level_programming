#include "main.h"

/**
 * print_square - print a square using #
 * @size: the size of the square
 * Return: 0
 */

void print_square(int size)
{
	int row, colomn;
	
	for (row = 1; row <= size; row++)
	{
		for (colomn = 1; colomn <= size; colomn++)
			_putchar('#');
		_putchar('\n');
	}
}
