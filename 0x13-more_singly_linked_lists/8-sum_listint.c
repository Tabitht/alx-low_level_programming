#include "lists.h"
/**
 * sum_listint- to return the sum of all the data in a linked list
 * @head: pointer to the linked list
 * Return: sum of data, returns 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
