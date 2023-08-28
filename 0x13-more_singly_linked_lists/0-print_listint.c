#include "lists.h"

/**
 * print_listint - prints all the elements of as listint_t list
 *
 * @h: Pointer to the head node of the list
 *
 * Return: The number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count;

	for (count = 0; h; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
