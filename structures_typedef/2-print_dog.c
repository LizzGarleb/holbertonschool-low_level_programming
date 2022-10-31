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
	else if (d->name == NULL)
	{
		printf("Name:(nil)\n", .name);
		printf("Age:%f\n", .age);
		printf("Owner:%s\n", .owner);
	}
	else if (d->age < 0)
	{
		printf("Name:%s\n", d->name);
		printf("Age:(nil)\n", d->age);
		printf("Owner:%s\n", d->owner);
	}
	else if (d->owner == NULL)
	{
		printf("Name:%s\n", d->name);
		printf("Age:%f\n", d->age);
		printf("Owner:(nil)\n", d->owner);
	}
	else
	{
		printf("Name:%s\n", d->name);
		printf("Age:%f\n", d->age);
		printf("Owner:%s\n", d->owner);
	}
}
