#include "main.h"

/**
 * _isdigit - function check if digit
 *
 * @c: checks inputs
 *
 * Return: 1 if digits 0 if not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 5)
		return (1);
	else
		return (0);
}
