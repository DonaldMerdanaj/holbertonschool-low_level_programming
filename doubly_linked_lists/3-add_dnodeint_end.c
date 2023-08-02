#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *add_dnodeint_end - function that adds new node at
 *the end of the doubly linked list
 *@head: header node
 *@n: value to new node
 *Return: pointer to the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode = NULL;
	dlistint_t *t = *head;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}

	newnode->n = n;

	if (t == NULL)
		*head = newnode;
	else
	{
		while (t->next != NULL)
			t = t->next;

		t->next = newnode;
		newnode->prev = t;
	}


	return (newnode);
}
