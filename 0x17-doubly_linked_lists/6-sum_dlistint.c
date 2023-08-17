#include <stdio.h>
#include "lists.h"
/**
 * sum_dlistint - to sum up data in a list
 * @head: head of list
 * Return: returns the sum of all data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
