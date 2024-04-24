#include "variadic_functions.h"

/**
 * print_strings - print the num
 * @separator: str separator
 * @n: nums arg
 * @...: integer
 * Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	int a = n;
	char *s;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (a--)
		printf("%s%s", (s = va_arg(ap, char *)) ? s : "(nil)", a ? (separator ? separator : "") : "\n");
	va_end(ap);
}
