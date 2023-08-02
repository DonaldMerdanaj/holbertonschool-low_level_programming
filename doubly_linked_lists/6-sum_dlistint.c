#include "lists.h"
#include <stdio.h>

/**
 *sum_dlistint - function that prints the sum of all elements
 *@head: header node
 *Return: the sum of all elements
 */

int sum_dlistint(dlistint_t *head)
{
	int n = 0;
	dlistint_t *h = head;

	while (h != NULL)
	{
		n += h->n;
		h = h->next;
	}

	return (n);
}
