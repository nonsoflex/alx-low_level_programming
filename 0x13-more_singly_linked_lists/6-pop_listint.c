#include "lists.h"

/**
* pop_listint - function that pops off the head of the list
* and returns its contents
*
* @head: top of the list
*
* Return: Always 0 success contents of the list
*/

int pop_listint(listint_t **head)
{
	int x;
	listint_t *count, *temp;

	if (head == NULL)
		return (0);
	temp = count = *head;
	if (*head)
	{
		x = count->n;
		*head = count->next;
		free(temp);
	}
	else
		x = 0;
	return (x);
}
