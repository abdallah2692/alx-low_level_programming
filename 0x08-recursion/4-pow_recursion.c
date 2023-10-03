#include "main.h"
/**
 *  _pow_recursionb- search a string for any of a set of bytes
 * @a: base
 * @b: exponintial
 * Return: compaire the bytes
 */

int _pow_recursion(int x, int y)
{
if (b < 0)
return (-1);
else if (b == 1)
return (a);
else if (b == 0)
return (1);

return (a * _pow_recursion(a, b - 1));
}
