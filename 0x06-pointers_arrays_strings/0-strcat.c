#include <stdio.h>
#include "main.h"

/**
 * _strcat - concatenation
 * @dest: destination input
 * @src: source input
 * Return: destination
*/

char *_strcat(char *dest, char *src)
{
    int a, b;

    a = 0;
    while (dest[a])
    a++;

    for (b = 0; src[b]; b++)
    dest[a++] = src[b];

    return (dest);
}