#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - to insert at a specific index
 * @h: head of list
 * @idx: index of node to be inserted
 * @n: data of node
 * Return: return inserted node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *before;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	before = *h;
	if (!*h)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}
	while ((i < idx - 1) && before->next != NULL)
	{
		before = before->next;
		i++;
	}
	if (i != idx)
	{
		return (NULL);
	}
	new_node->next = before->next;
	new_node->prev = before;
	before->next = new_node;
	before->next->prev = new_node;
	return (new_node);
}
