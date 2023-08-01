#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 *dlistint_len - function that prints all the elements
 *@h: header node
 *Return: the number of the nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
