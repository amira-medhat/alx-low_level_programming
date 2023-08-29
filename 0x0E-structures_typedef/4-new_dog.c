#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - makes new struct for new dog
 * @name: its name.
 * @age: its age.
 * @owner: its owner.
 * Return: pointer to the structure.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr = (dog_t *)malloc(sizeof(dog_t));

	if (!ptr)
		return (NULL);
	ptr->name = (char *)malloc(sizeof(char) * (strlen(name) + 1));
	ptr->owner = (char *)malloc(sizeof(char) * (strlen(owner) + 1));
	if (!(ptr->owner) || !(ptr->name))
	{
		free(ptr->name);
		free(ptr->owner);
		free(ptr);
		return (NULL);
	}
	strcpy(ptr->name, name);
	strcpy(ptr->owner, owner);

	ptr->age = age;
	return (ptr);
}
