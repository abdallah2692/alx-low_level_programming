#include <stdio.h>

/**
 * _sqrt - find the square root
 * @x: input num
 * Return: square of x
 */

double _sqrt(double x)
{
	float sqrt, tmp;

	sqrt = x / 2;
	tmp = 0;

	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (x / tmp + tmp) / 2;
	}
	return (sqrt);
}



/**
 * largest_prime_factor - find and print the largest prime factor
 * @num: num to find
 */

void largest_prime_factor(long int num)
{
	int prmNu, largest;

	while (num % 2 == 0)
		num = num / 2;

	for (prmNu = 3; prmNu <= _sqrt(num); prmNu += 2)
	{
		while (num % prmNu == 0)
		{
			num = num / prmNu;
			largest = prmNu;
		}
	}

	if (num > 2)
		largest = num;
	printf("%d\n", largest);
}




/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	largest_prime_factor(612852475143);

	return (0);
}
