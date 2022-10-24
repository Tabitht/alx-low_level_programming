#include "lists.h"
/**
 * pop_listint- deletes the head node of a linked
 * list and returns the head nodes data
 * @head: begining node
 * Return: returns the head node data, returns 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *first;
	int i;
	if ((*head) == NULL)
		return (0);
	first = *head;
	*head = (*head)->next;
	i = first->n;
	free(first);
	return (i);
}

