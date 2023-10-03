#include "main.h"
/**
 * _sqrt_recursion - find natural square
 * @n: int
 * @a: square root
 * Return: int
 */

int square(int n, int a);
int _sqrt_recursion(int n)
{
return (square(n, 1));
}

/**
 * square - find natural square
 * @n: int
 * @a: square root
 * Return: int
 */
int square(int n, int a)
{
if (a * a == n)
return (a);
else if (a * a < n)
return (square(n, a + 1));
else
return (-1);
}
