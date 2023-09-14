#include "main.h"

/**
 * print_alphabet - print the alohabet a-z
 * Description: alphabet type
 * Return: Always 0.
 */
void print_alphabet(void)

{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		-putchar(ch);
	-putchar('\n');
}

