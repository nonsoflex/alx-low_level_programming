#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a
 * lisint_t list
 *
 * @head: A pointer to the head of the listint_t list
 *
 * @n: the integer to be added to the listint_t list
 *
 * Return: If successful return the address of the new element
 * otherwise NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!*head)
	{
		*head = new;
		return (*head);
	}

	last = *head;

	while (last->next)
		last = last->next;
	last->next = new;

	return (*head);
}
