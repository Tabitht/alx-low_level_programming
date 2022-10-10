#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
/**
 * free_dog- to free previously allocated space
 * @d: variable of dog_t
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
