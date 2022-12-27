#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - prints the contents of a list
 * @h: head of the list
 * Return: number of elements in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
