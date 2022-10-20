#include "lists.h"
/**
 * free_list- to free a list_t list
 * @head: pointer to the list of list_t
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *tmp;
	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
	free(head);
}
