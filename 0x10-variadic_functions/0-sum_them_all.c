#include "variadic_functions.h"

/**
 * sum_them_all - sum of the parameter
 * @n: of the argument
 * @...: int to be sumed
 * Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
	int a = 0, b = n;
	va_list ap;

	if (!n)
		return (0);
	va_start(ap, n);
	while (b--)
		a += va_arg(ap, int);
	va_end(ap);
	return (a);
}
