#include "dog.h"

/**
 * free_dog - function that frees dogs
 * @d: dog to free
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->age);
	free(d->owner);
	free(d);
}
