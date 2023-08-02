#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
/**
 * get_dnodeint_at_index - function that returns the nth
 * node of a doubly linked list
 *@head: head node
 *@index: index of the node needed
 *Return: the node at index passed as argument
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	int i;
	dlistint_t *it = head;

	if (head == NULL)
		return (NULL);

	for (i = 0; i <= (int) index - 1; i++)
	{
		if (it == NULL)
			return (NULL);

		it = it->next;
	}

	return (it);

}
