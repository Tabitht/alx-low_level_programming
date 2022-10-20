#include "main.h"
/**
 * free_list- to free a list_t list
 * @head: pointer to the list of list_t
 * Return: void
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head->len);
		free(head);
		head = head->next;
	}
}
