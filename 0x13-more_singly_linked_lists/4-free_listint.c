#include "lists.h"
/**
 * free_listint- to free a list_t list
 * @head: pointer to the list of list_t
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(head);
}
