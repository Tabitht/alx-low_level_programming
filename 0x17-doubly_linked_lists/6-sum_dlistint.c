#include "lists.h"
/**
 * int sum_dlistint - returns the sum of elements in a list
 * @head: pointer to beginning of the list
 * Return: sum of all elements in the list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

