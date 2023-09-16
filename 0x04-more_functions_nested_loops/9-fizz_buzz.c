#include "main.h"

/**
 * main - print 1 - 100 \n
 * 	num is mult. of 3 print Fizz
 * 	num is mult. of 5 print Buzz
 * 	num is mult. of 3 and 5 print FizzBuzz
 * 	each are separeted
 * Return: ALways 0
 */

int main(void)
{
	int num;
	
	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && !(num % 5 == 0))
			printf("Fizz");
		else if (num % 5 == 0 && !(num % 3 == 0))
			printf("Buzz");
		else if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", num);

		if (num != 100)
			print(" ");
		else
			printf("\n");
	}

	return (0):
}
