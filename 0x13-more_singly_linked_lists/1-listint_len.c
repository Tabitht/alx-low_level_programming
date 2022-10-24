#include "lists.h"
/**
 * listint_len- returns the number of element in a linked list list_t
 * @h: nodes in the linked list
 * Return: the number of element in the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
