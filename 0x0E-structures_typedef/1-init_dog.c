#include <string.h>
#include <stdlib.h>
#include "dog.h"

#define MAX_NAME_LENGTH 50

/**
 * init_dog - initializes a variable of type struct dog
 *
 * @d: struct variable pointer
 * @name: dog name to pass into struct
 * @age: age to pass into struct
 * @owner: owner name to pass into struct
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = malloc(sizeof(char) * MAX_NAME_LENGTH);
	d->owner = malloc(sizeof(char) * MAX_NAME_LENGTH);

	if (d->name != NULL && d->owner != NULL)
	{
		strcpy(d->name, name);
		d->age = age;
		strcpy(d->owner, owner);

	}
}
