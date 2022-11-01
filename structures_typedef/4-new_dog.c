#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner name
 * Return: Null if fails otherwise the value of the pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n;

	n = malloc(sizeof(dog_t));

	if (n == NULL)
	{
		return (NULL);
	}

	n->name = malloc(sizeof(name) * strlen(name));
	if (n->name == NULL)
	{
		free(n);
		return (NULL);
	}

	n->owner = malloc(sizeof(owner) * strlen(owner));
	if (n->owner == NULL)
	{
		free(n->name);
		free(n);
		return (NULL);
	}
	else
	{
		strcpy(n->name, name);
		n->age = age;
		strcpy(n->owner, owner);
	}
	return (n);
}
