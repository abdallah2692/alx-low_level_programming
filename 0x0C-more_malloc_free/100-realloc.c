#include "main.h"
/**
 * *_realloc - allocate a memory block
 * @ptr: maximume
 * @old_size: size of pointer
 * @new_size: size of block
 * Return: NULL or not
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int a;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		return (p);
	}
	if (new_size > old_size)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		for (a = 0; a < old_size && a < new_size; a++)
			*((char *)p + a) = *((char *)ptr + a);
		free(ptr);
	}
	return (p);
}
