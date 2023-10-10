#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of string
 * @s: given string
 * Return: returns length
 */

int _strlen(char *s)
{
	int len = 0;

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
	dog_t *dog1;

	if (!name || age < 0 || !owner)
	{
		return (NULL);
	}

	dog1 = (dog_t *)malloc(sizeof(dog_t));
	if (dog1 == NULL)
	{
		return (NULL);
	}

	dog1->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog1->name == NULL)
	{
		free(dog1);
		return (NULL);
	}

	dog1->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dog1->owner == NULL)
	{
		free(dog1->name);
		free(dog1);
		return (NULL);
	}

	dog1->name = _strcpy(dog1->name, name);
	dog1->owner = _strcpy(dog1->owner, owner);
	dog1->age = age;

	return (dog1);
}
