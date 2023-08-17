#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint_end - adds a node to the end of a list
 * @head: head of the list
 * @n: element of the node
 * Return: returns the node or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *before;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	before = *head;
	if (!*head)
	{
		*head = new_node;
		return (*head);
	}
	while (before->next != NULL)
	{
		before = before->next;
	}
	new_node->next = NULL;
	new_node->prev = before;
	before->next = new_node;
	return (new_node);
}
