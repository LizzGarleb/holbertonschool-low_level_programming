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
	else if (name == NULL || owner == NULL)
	{
		printf("Name:(nil)\nAge:%f\nOwner:(nil)\n", name, age, owner);
	}
	else
	{
		printf("Name:%s\nAge:%f\nOwner:%s\n", name, age, owner);
	}
}
