#include "lists.h"
/**
 * get_nodeint_at_index- returns the nth node of a listint_t list
 * @head: pointer to the listint_t list
 * @index: index of the node
 * Return: the nth node of the list, returns null if node doesnt exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i;
	tmp = head;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		tmp = head;
	}
	return (tmp);
}
