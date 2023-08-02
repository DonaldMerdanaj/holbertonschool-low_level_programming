#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a
 * new node at a given position
 *@h: head node;
 *@idx: index to be inserted;
 *@n: n value of the new node
 *Return: addres of the new node or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode;
	int i = 0;

	if ((*h) == NULL || idx == 0)
		newnode = add_dnodeint(&(*h), n);
	else
	{
		while (i < (int) idx - 1)
		{
			if ((*h) == NULL)
				return (NULL);
			h = &((*h)->next);
			i++;
		}

		if ((*h)->next == NULL)
			newnode = add_dnodeint_end(&(*h), n);
		else
		{
			newnode = malloc(sizeof(dlistint_t));
			newnode->n = n;

			if (!newnode)
			{
				free(newnode);
				return (NULL);
			}
			newnode->next = (*h)->next;
			newnode->prev = *h;
			(*h)->next->prev = newnode;
			(*h)->next = newnode;
		}
	}
	return (newnode);
}
