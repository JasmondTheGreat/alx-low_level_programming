#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog structure
 * @name: member name (a string)
 * @age: member age (a number)
 * @owner: member owner (a string)
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dot_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif
