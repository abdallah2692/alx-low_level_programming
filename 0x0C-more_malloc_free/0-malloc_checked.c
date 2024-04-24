#include "main.h"

/**
 * *malloc_checked - allocate memory using malloc and exit
 * @b: int
 * Return: pointer to array
*/

void *malloc_checked(unsigned int b)
{
	int *s = malloc(b);

	if (s == 0)
		exit(98);

	return (s);
}
