#ifndef DOG_H
#define DOG_H

#include <stdio.h>

void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * struct dog - simple dog struct
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 *
 * Description: takes in name, age and owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
