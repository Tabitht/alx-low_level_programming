#include <stdio.h>
#include "lists.h"
/**
 * free_dlistint_t - to free a doubly linked list
 * @head: head of the list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	temp = head;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
