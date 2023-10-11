#include "dog.h"


/**
 * _strlen - length of a string
 * @s: string
 * Return: lenght
*/
int _strlen(const char *s)
{
	int l = 0;

	while(*s++){
		l++;
	}
	return (NULL);
}

/**
 * _strcpy - copy a string
 * @sc: the string
 * @d: copy
 * Return: s
*/

char *_strcpy(char *d, char *sc)
{
	int a;

	for (a = 0; sc[a]; a++)
		d[a] = sc[a];
	d[a] = '\0';
	return (d);
}






/**
 * new_dog - the new dog
 * @name: the name
 * @age: the age
 * @owner: the owner
 * Return: string or NULL
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (!name || age < 0 || !owner)
		return (NULL);

	d = (dog_t *) malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	(*d).name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*d).name == NULL)
	{
		free(d);
		return (NULL);
	}

	(*d).owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*d).owner == NULL)
	{
		free((*d).name)
		free(d);
		return (NULL);
	}
}
