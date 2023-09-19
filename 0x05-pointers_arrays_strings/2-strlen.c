#include "main.h"
/**
 *  _strlen - changr the value to 98
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
int lengthi = 0;
while (*s != '\0')
{
lengthi++;
s++;
}
return (lengthi);
}
