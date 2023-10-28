#include "main.h"

/**
 * filp_bits -  get from one number to another.
 * @n: inpiut num 1
 * @m: intput num 2
 * Return: count
*/



unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorval = n ^ m;
	unsigned int count = 0;

	while (xorval)
	{
		if (xorval & 1ul)
			count++;
		xorval = xorval >> 1;
	}
	return (count);
}
