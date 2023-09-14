#include "main.h"

/**
 * times_table - print 9 times
 * Example Table
 * 0, 0, 0, ..
 * 0, 1, 2, ..
 */

void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar(48);
		for (mult = 1; mu;t <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * mult;

			/**
			 * put space if product is a single num
			 * place the first digit if its two
			 */
			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + 48);

			_putchar((prod % 10) + 48);
		}
		_putchar('\n');
	}
}
