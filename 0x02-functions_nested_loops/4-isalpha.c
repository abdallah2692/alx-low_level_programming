#include "main.h"

/**
 * _isalpha - checks if upper or lower
 * @c: tacke inputs
 * Return: 1 if true
 */

int _isalpha(int c)

{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
