
#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - check prime number
 * @n: int
 * @a: int
 * Return: 0 or 1
 */
int check_prime(int n, int a);
int is_prime_number(int n)
{
return (check_prime(n, 2));
}

/**
 * check_prime - check prime number
 * @n: int
 * @a: int
 * Return: int
 */

int check_prime(int n, int a)
{
if (a >= n && n > 1)
return (1);
else if (n % a == 0 || n <= 1)
return (0);
else
return (check_prime(n, a +1));
}