#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: a pointer to the new dog struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = malloc(sizeof(dog_t));

	if (newDog == NULL)
		return (NULL);

	newDog->name = malloc(strlen(name) + 1);
	newDog->owner = malloc(strlen(owner) + 1);

	if (newDog->name != NULL || newDog->owner != NULL)
	{
		strcpy(newDog->name, name);
		strcpy(newDog->owner, owner);
		newDog->age = age;
	}
	else
	{
		free(newDog);
		newDog = NULL;
	}

	return (newDog);
}
