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
listint_t *temp, *current;

temp = malloc(sizeof(listint_t));
if (temp == NULL)
return (NULL);
temp->n = n;
temp->next = NULL;

if (*head == NULL)
{
*head = temp;
return (*head);
}
current = *head;
while (current->next != NULL)
current = current->next;
current->next = temp;
return (*head);
}
