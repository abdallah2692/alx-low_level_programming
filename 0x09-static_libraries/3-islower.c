#include "main.h"

/**
 * _islower - function check if lowercase
 *
 * @c: checks inputs
 *
 * Return: 1 if lower 0 if upper
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

