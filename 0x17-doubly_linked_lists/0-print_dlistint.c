#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - prints the element present in a list
 * @h: head of list
 * Return: returns the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t no_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		no_count++;
	}
	return (no_count);
}
