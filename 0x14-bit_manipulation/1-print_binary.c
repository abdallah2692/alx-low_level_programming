#include "main.h"

void print_binary(unsigned long int n)
{
	int a = sizeof(n) * 8 , i = 0;

	while (a)
	{
		if (n & 1L << --a)
		{
			_putchar('1');
			i++;
		}
		else if (i)
			_putchar('0');
	}
	if (!i)
		_putchar('0');
}
