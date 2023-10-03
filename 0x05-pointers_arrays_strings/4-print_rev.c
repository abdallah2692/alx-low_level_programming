#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
int lengthi = 0;
int o;

while (*s != '\0')
{
lengthi++;
s++;
}
s--;
for (o = lengthi; o > 0; o--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
