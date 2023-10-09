#include "main.h"
/**
 * _puts - print a string
 * @str: the string should be printed
 * Return: nothing
*/

void _puts(char *str)
{
	int a;

	while (str[a])
	{
		_putchar(str[a]);
		a++;
	}
}

/**
 * _atoi - convert a string to  an integer
 * @s: string
 * Return: int
*/

int _atoi(const char *s)
{
	int s1 = 1;
	unsigned long int r = 0, a, b;

	for (a = 0; !(s[a] >= 48 && s[a] <= 57); a++)
	{
		if (s[a] == '-')
		{
			s1 *= -1;
		}
	}
	for (b = a; s[b] >= 48 && s[b] <= 57; b++)
	{
		r *= 10;
		r += (s[b] - 48);
	}
	return (s1 * r);
}

/**
 * print_int - print an integer
 * @n: integer
 * Return: 0
*/

void print_int(unsigned long int n)
{
	unsigned long int div = 1, a, r;

	for (a = 0; n / div > 9; a++, div *= 10)
	;
	for (; div >= 1; n %= div, div /= 10)
	{
		r = n / div;
		_putchar('0' + r);
	}
}


/**
 * main - intery point
 * @argc: int
 * @argv: a list
 * Return: 0
*/


int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error ");
		exit(98);
	}
	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');
	return (0);
}





