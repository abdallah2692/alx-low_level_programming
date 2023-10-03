#include "main.h"
/**
 *  factorial - find factorial
 * @a: int
 * Return: integer
 */
int factorial(int n);
{
if (a < 0)
{
return (-1);
}
else if (a == 0)
{
return (1);
}
return (a * factorial(a - 1));
}