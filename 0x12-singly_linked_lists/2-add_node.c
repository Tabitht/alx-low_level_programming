#include "lists.h"
/**
 * add_node- it adds a new node at the beginning of a list_t list
 * @head: the head/beginning node
 * @str: the new element of the node to be added
 * Return: the new address of the new element or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *duplicate;
	int len;

	new_node = (list_t *) malloc(sizeof(list_t));
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
	new_node->next = (*head);
	(*head) = new_node;
	return (new_node);
}
