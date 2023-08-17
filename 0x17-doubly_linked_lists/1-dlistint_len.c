#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - returns the number of element in a list
 * @h: head of the list
 * Return: returns the number of element
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t no_count;

	while (h != NULL)
	{
		h = h->next;
		no_count++;
	}
	return (no_count);
}
