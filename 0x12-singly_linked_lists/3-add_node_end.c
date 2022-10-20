#include "lists.h"
/**
 * add_node_end- adds a new node at the end of list_t list
 * @head: the head/beginning node
 * @str: the new str of the new node to be added
 * Return: address of new element, returns NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last;
	int len;
	char *duplicate;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	duplicate = strdup(str);
	if (duplicate == NULL)
	{
		free(new_node);
		return (NULL);
	}
	len = strlen(duplicate);
	new_node->str = duplicate;
	new_node->len = len;
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new_node;
	}
	return (*head);
}

