#include "main.h"
/**
 * print_diagsums - fills memory with a constetnt bytes
 * @a: array
 * @size: size of array
*/

void print_diagsums(int *a, int size)
{
	int b, s1 = 0, s2 = 0;

	for (b = 0; b < size; b++)
	{
		s1 += a[b];
		s2 += a[size - b - 1];
		a += size;
	}
	printf("%d, ", s1);
	printf("%d\n", s2);
}
