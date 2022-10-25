#include "lists.h"
/**
 * delete_nodeint_at_index- deletes a node at a given index
 * @head: pointer to the linked lists
 * @index: index to delete node from
 * Return: 1 for succession, -1 for failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *prev = *head;
	unsigned int i;

	tmp = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
	}
	else
	{
		for (i = 0; i < index - 1; i++)
		{
			if (prev->next == NULL)
				return (-1);
			prev = prev->next;
		}
		tmp = prev->next;
		prev->next = prev->next->next;
		free(tmp);
	}
	return (1);
}
