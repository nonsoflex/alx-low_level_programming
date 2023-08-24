#include "lists.h"


/**
* print_list - function that prints all elements of a list_t list
*
* @h: singly linked list to print
*
* Return: number of nodes in the list
*/

size_t print_list(const list_t *h)
{
	size_t x;

	for (x = 0; h; x++)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (x);
}
