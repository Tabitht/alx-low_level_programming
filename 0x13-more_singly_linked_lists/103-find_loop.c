#include "lists.h"
/**
 * find_listint_loop- finds the loop in a linked list
 * @head: pointer to the linked list
 * Return: address of the node where the loop
 * starts or null if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	slow = head;
	fast = head;

	if (head == NULL)
		return (NULL);
	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (slow);
		else
			return (NULL);
	}
	return (slow);
}
