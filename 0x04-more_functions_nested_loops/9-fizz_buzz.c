#include "main.h"
#include <stdio.h>

/**
 * main - print 1 - 100 \n
 *	num is mult. of 3 print Fizz
 *	num is mult. of 5 print Buzz
 *	num is mult. of 3 and 5 print FizzBuzz
 *	each are separeted
 * Return: ALways 0
 */

int main(void)
{
	int i;
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf(" Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (i == 1)
		{
			printf("%d", i);
		}
		else
		{
			printf(" %d", i);
		}
	}
	printf("\n");

	return (0);
}
