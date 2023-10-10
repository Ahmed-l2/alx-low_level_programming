#include <stdio.h>
#include "dog.h"

/**
 * init_dog - function that initialize a struct type
 * @d: name of struct type
 * @name: initializes name
 * @age: initializes age
 * @owner: initializes owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if(d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
