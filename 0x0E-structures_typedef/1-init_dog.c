#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialized a 'struct dog'
 *
 * @d: dog struct pointer
 * @name: name param (string)
 * @age: age param (float)
 * @owner: owner param (string)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *puppy;

	puppy = malloc(sizeof(struct dog));

	puppy -> name = name;
	puppy -> age = age;
	puppy -> owner = owner;
}
