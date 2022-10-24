#include "lists.h"
/**
 * insert_nodeint_at_index- inserts a node at a given index
 * @head: pointer to the linked list
 * @idx: index to insert node
 * @n: data for new node
 * Return: address of new node, returns NULL if its fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = (*head);
		*head = new_node;
		return (new_node);
	}
	for (i = 0; i <= idx; i++)
	{
		if ((*head) == NULL || (*head)->next == NULL)
			return (NULL);
		*head = (*head)->next;
	}
	new_node->next = (*head);
	(*head) = new_node;
	return (new_node);
}

