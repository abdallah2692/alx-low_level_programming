#include "variadic_functions.h"

/**
 * print_strings - print the inputs num
 * @separator: string separator
 * @n: nums of the arg
 * @...: the integer
 * Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	int a = n;
	char *str;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (a--)
		printf("%s%s", (str = va_arg(ap, char *)) ? str : "(nil)", a ? (separator ? separator : "") : "\n");
	va_end(ap);
}
