#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node at given index
 * @head: pointer to beginning of list
 * @index: index of node to be deleted
 * Return: 1 for success -1 for failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *nth;
	unsigned int i;

	temp = *head;
	if (!head)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	for (i = 0; i < index && *head != NULL; i++)
	{
		temp = temp->next;
	}
	if (i != index - 1)
		return (-1);
	nth = temp->prev;
	nth->next = temp->next;
	if (temp->next)
		temp->next->prev = nth;
	free(temp);
	return (1);
}
