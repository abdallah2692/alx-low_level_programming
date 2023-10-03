#include "main.h"
/**
 *  _pow_recursionb- search a string for any of a set of bytes
 * @x: base
 * @y: exponintial
 * Return: compaire the bytes
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y == 1)
return (x);
else if (y == 0)
return (1);

return (x * _pow_recursion(x, y - 1));
}
