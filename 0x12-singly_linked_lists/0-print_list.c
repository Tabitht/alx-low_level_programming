#include "lists.h"
#include <stdio.h>
/**
  * print_list- prints all the elements of a list_t list
  * @h: the nodes of the linked list
  *Return: the number of nodes
  */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	while (h != NULL)
	{
		printf("%s\n", h -> str);
		printf(("%u\n", h -> len));
		h = h -> next;
		count++
	}
	return (count);
}
