#include "dog.h"

/**
 * new_dog - function that creates a new type for struct dog_t
 * @name: initializes name of dog
 * @age: initializes age of dog
 * @owner: initializes name of dog owner
 * Return: returns new_dog struct type
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog != NULL)
	{
		new_dog->name = name;
		new_dog->age = age;
		new_dog->owner = owner;
	}
	return (new_dog);
}
