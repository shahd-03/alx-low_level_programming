#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Initializedog structure
 * @d: A dog structure.
 * @name: dog name
 * @age: dog age
 * @owner: The owner of the dog
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
