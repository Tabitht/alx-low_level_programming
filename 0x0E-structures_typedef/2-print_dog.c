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
		d->owner = "(nil)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
