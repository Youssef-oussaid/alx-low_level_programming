#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - a function
 * @name: a string
 * @age: a float
 * @owner: a string
 * Return: a pointer to a struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog = (dog_t *)malloc(sizeof(dog_t));

	if (newdog == NULL)
		return (NULL);

	newdog->name = strdup(name);
	newdog->age = age;
	newdog->owner = strdup(owner);

	if (newdog->name == NULL || newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog->owner);
		free(newdog);
		return (NULL);
	}
	return (newdog);
}
