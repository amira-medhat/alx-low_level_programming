#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - frees structures for dogs
 * @d: pointer to the structure.
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
