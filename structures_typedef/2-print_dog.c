#include <stdio.h>
#include "dog.h"
/**
 * print_dog - function that prints a struct dog
 * @d: pointer to our struct
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
	}
	else if (d->name == NULL || d->owner == NULL)
	{
		printf("Name: (nil)\nAge: %f\nOwner: (nil)\n", d->age);
	}
	else if (d->age < 0)
	{
		printf("Name: %s\nAge: (nil)\nOwner: %s\n", d->name, d->owner);
	}
	else
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
