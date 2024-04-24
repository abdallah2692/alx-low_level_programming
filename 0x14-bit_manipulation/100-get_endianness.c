#include "main.h"
/**
 * get_endianness - return that of the system
 * Return: nothing
*/

int get_endianness(void)
{
	unsigned long int a = 1;

	return (*(char *)&a);
}
