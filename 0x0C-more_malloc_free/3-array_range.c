#include "main.h"

/**
 * *array_range - concat two string
 * @max: maximume
 * @min: starting
 * Return: array of pointer
*/

int *array_range(int min, int max)
{
	int a, b;
	int *s;

	if (min > max)
		return (NULL);

	a = max - min + 1;
	s = malloc(sizeof(int) * a);
	if (!s)
		return (NULL);
	for (b = 0; b < a; b++)
		s[b] = min++;
	return (s);
}
