#include "lists.h"
#include <stdio.h>
/**
 * add_dnodeint - adds a node to a list at the beginning
 * @head: pointer to the beginning of the list
 * @n: data of node to add to the list
 * Return: the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	if (!*head)
	{
		new_node->next = NULL;
		*head = new_node;
		return (*head);
	}
	(*head)->prev = new_node;
	*head = new_node;
	return (new_node);
}
