#include <stdio.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - delete a node at an index
 * @head: head of list
 * @index: index of the node
 * Return: return 1 if succeeded -1 for failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *position, *before;
	unsigned int i = 0;

	if (!*head)
	{
		return (-1);
	}
	position = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(position);
		return (1);
	}

	while (i < index && position)
	{
		position = position->next;
		i++;
	}
	if (i != index - 1)
	{
		return (-1);
	}
	before = position->prev;
	before->next = position->next;
	if (position->next)
	{
		position->next->prev = before;
	}
	free(position);
	return (1);
}
