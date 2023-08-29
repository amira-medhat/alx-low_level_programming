#include "dog.h"
#include <stdio.h>
#include <string.h>

/**
 * init_dog - initialize data for a new dog.
 * @d: pointer to the new structure.
 * @name: its name.
 * @age: its age.
 * @owner: its owner.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->age = age;
		d->name = name;
		d->owner = owner;
	}
}
