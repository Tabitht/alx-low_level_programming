#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given index
 * @head: pointer to beginning node
 * @idx: index to insert new node
 * @n: data of new node
 * Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *before, *after;
	unsigned int i;

	after = malloc(sizeof(dlistint_t));
	if (!after)
		return (NULL);
	after->n = n;
	after->prev = NULL;
	after->next = NULL;
	before = *h;
	if (!*h)
		return (NULL);
	if (idx == 0)
	{
		after = add_dnodeint(h, n);
		return (after);
	}

	for (i = 0; i < idx - 1 && before->next != NULL; i++)
	{
		if (before->next == NULL && i == idx - 1)
		{
			after = add_dnodeint_end(h, n);
			return (after);
		}
		if (i != idx)
			return (NULL);
		if (idx - 1 == i)
		{
			after->next = before->next;
			after->prev = before;
			before->next->prev = after;
			before->next = after;
			return (after);
		}
		before = before->next;
	}
	free(after);
	return (NULL);
}

