#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initializes a struct dog with the given values
 *
 * @d: pointer to the struct dog to be initialized
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
