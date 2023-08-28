#include "lists.h"

/**
 * * free_listint2 - function that frees a list and sets its head to NULL
*
* @head: pointer to head of list
*
* Return: nothing (Success)
*/

void free_listint2(listint_t **head)
{
	listint_t *count, *temp;

	if (head == NULL)
		return;

	temp = *head;
	while (temp != NULL)
	{
		count = temp;
		count = temp->next;
		free(count);
	}
	*head = NULL;
}
