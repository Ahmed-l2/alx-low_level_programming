#include "dog.h"

int _strlen(char *s)
{
	int len;

	while (*s++)
	{
		len++;
	}
	return (len);
}

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

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
	if (age < 0)
	{
		return (NULL);
	}

	if (new_dog != NULL)
	{
		new_dog->name = malloc(_strlen(name) + 1);
		new_dog->owner = malloc(_strlen(owner) + 1);
		if (new_dog->name != NULL && new_dog->owner != NULL)
		{
			_strcpy(new_dog->name, name);
			_strcpy(new_dog->owner, owner);
			new_dog->age = age;
		}
		else
		{
			free(new_dog->name);
			free(new_dog->owner);
			return (NULL);
		}
	}
	return (new_dog);
}
