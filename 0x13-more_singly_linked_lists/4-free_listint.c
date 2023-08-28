#include "lists.h"
#include <stdlib.h>

/**
* free_listint - delete function ti free lists
*
* @head: describe argument
*
* Return: nothing
*/

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
