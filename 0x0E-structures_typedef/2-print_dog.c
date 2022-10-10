#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog- to print the contents of struct dog
 * @d: variable to access member of the structure
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			d->name = "(nil)";
		if (d->owner == NULL)
			d->name = "(nil)";
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("owner: %s\n", d->owner);
	}
	else
		printf("");
}
