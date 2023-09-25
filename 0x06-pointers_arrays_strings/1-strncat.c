#include "main.h"

/**
 * _strncat - concatenation
 * @dest: destination input
 * @src: source input
 * @n: number of bytes
 * Return: destination
*/

char *_strncat(char *dest, char *src, int n)
{
int a, b;

a = 0;
while (dest[a])
{
    a++;
}

/**
 * src doesn’t need to be null
 * if it contain n
 */
for (b = 0; b < n && src[b] != '\0'; b++)
{
    dest[a + b] = src[b];
}

dest[a + b] = '\0';

return (dest);
}