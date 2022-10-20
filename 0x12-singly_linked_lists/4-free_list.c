#include "main.h"
/**
 * free_list- to free a list_t list
 * @head: pointer to the list of list_t
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *n
	while (head != NULL)
	{
		n = head;
		head = head->next;
		free(head->str);
		free(n);
	}
	free(head);
}
