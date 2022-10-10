#include <stdio.h>
#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 * new_dog- to create a dog details
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 * Return: returns the details of structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j;
	dog_t *d;


	i = strlen(name);
	j = strlen(owner);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}
	d->name = malloc(sizeof(char) * i + 1);
	if ((d->name) == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(sizeof(char) * j + 1);
	if ((d->owner) == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	strcpy((d->name), name);
	strcpy((d->owner), owner);
	d->age = age;

	return (d);
}


