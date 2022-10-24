#include "lists.h"
/**
 * add_nodeint- it adds a new node at the beginning of a list_t list
 * @head: the head/beginning node
 * @n: the new element of the node to be added
 * Return: the new address of the new element or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = (listint_t *) malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = (*head);
	(*head) = new_node;
	return (new_node);
}
