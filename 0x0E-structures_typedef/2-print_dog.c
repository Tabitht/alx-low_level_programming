#include <stdio.h>
#include "dog.h"
/**
 * print_dog- to print the contents of struct dog
 * @d: variable to access member of the structure
 * Returns: void
 */
void print_dog(struct dog *d)
{
	if ((d -> name) == NULL)
		printf("Name: (nil)");
	if ((d -> age) == 0)
		printf("Age: (nil)");
	if ((d -> owner) == NULL)
		printf("owner: (nil)");
	if (d == NULL)
		printf("");
	printf("Name: %s\n", (*d).name);
	printf("Age: %f\n", (*d).age);
	printf("owner: %s\n", (*d).owner);
}
