#include "main.h"


/**
 * get_bit - print binary
 * @n: input num
 * @index: bits
 * Return: bit or -1
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
