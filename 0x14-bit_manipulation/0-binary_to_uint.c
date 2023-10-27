#include "main.h"
#include <math.h>
#include <string.h>


/**
 * binary_to_unit - convert
 * @b: a string of 1&0
 * Return: a
 */
unsigned int binary_to_uint(const char *b)
{

	int i;
	unsigned int p, a = 0;

	if (b == NULL)
		return (0);
	for (i = strlen(b) - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		p = pow(2, strlen(b) - i - 1);
		if (b[i] == '1')
			a += p;
	}
	return (a);
}
