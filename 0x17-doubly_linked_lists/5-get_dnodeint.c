#include <stdio.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - to get a node at a particular index
 * @head: head of list
 * @index: index of the node
 * Return: the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *position;
	unsigned int i = 0;

	position = head;
	if (!head)
	{
		return (NULL);
	}
	while (i < index && position->next != NULL)
	{
		position = position->next;
		i++;
	}
	if (i != index)
	{
		return (NULL);
	}
	return (position);
}
