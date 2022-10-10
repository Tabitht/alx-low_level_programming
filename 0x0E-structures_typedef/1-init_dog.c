#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - a function that initializes a variable of type struct dog
 * @d: the structure variable
 * @name: first memeber of char datatype, initializes to a name
 * @age: second member of float datatype, intializes to age
 * @owner: it initializes to the owner of the dog
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

