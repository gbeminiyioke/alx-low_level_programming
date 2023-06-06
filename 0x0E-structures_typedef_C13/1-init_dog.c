#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - this function initializes a
 * variable of type struct dog
 * @d: pointer to struct dog, to be initialized
 * @name: name
 * @age: age
 * @owner: owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
