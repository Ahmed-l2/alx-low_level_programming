#include "dog.h"

/**
 * _strlen - returns the length of string
 * @s: given string
 * Return: returns length
 */

int _strlen(char *s)
{
	int len;

	while (*s++)
	{
		len++;
	}
	return (len);
}

/**
 * _strcpy - copies string from source to destination
 * @dest: destination
 * @src: source
 * Return: returns copied string
 */

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
	dog_t *new_dog;

	if (!name || age < 0 || !owner)
	{
		return (NULL);
	}

	new_dog = (dog_t *)malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_dog->name = malloc(sizeof(char) * _strlen(name) + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = malloc(_strlen(owner) + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	new_dog->name = _strcpy(new_dog->name, name);
	new_dog->owner = _strcpy(new_dog->owner, owner);
	new_dog->age = age;

	return (new_dog);
}
