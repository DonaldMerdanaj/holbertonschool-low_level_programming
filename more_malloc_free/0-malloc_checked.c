#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *malloc_checked - function that allocates memory
 *@b: size of the array
 *Return: returns void pointer to the created array
 */

void *malloc_checked(unsigned int b)
{
	void *array = malloc(b);

	if (array == NULL)
	{
		exit(98);
	}
	return (array);
}
