#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - function that frees a doubly linked list
 * @head: head node
 */

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	if (head->next != NULL)
		free_dlistint(head->next);
	free(head);
}
