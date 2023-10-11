#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * struct dog - structs dog
 * @name: the name
 * @age: the age
 * @owner: the owner
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);


#endif
