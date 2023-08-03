#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *delete_dnodeint_at_index - function that deletes the node at index given
 *@head: head node
 *@index: index
 *Return: 1 if it succeeded and -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *it = *head;
	dlistint_t *temp = NULL;
	unsigned int i = 0;

	if (index == 0 && it != NULL)
	{
		(*head) = (*head)->next;
		free(it->next->prev);
		it->next->prev = NULL;
		return (1);
	}
	if (it == NULL)
		return (-1);
	while (i < index)
	{
		if (it->next == NULL && i < index)
			return (-1);
		it = it->next;
		i++;
	}
	if (it->next == NULL)
	{
		temp = it;
		it->prev->next = NULL;
		free(temp);
		return (1);
	}
	else
	{
		temp = it;
		it->next->prev = it->prev;
		it->prev->next = it->next;
		free(temp);
		return (1);
	}

	return (-1);
}
