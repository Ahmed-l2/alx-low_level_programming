#include "dog.h"

/**
 * print_dog - prints struct type
 * @d: type of struct
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return (0);
	}

	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}

	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
	{
		printf("Owner: (nil)");
	}
	else
	{
		printf("Owner: %s", d->owner);
	}

}
