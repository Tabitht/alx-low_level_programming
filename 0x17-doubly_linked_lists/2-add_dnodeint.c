#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint - to add a node at the beginning of a list
 * @head: head of the list
 * @n: data of the node to be added
 * Return: address of new element or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
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
