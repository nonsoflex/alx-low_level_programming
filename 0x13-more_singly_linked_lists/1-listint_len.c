#include "lists.h"

/**
 * listint_len - a function that returns the number of elements
 * in a linked listint_t list
 *
 * @h: Pointer to the head node of the list
 *
 * Return: The number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
