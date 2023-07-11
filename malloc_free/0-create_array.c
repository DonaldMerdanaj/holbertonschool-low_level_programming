#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars
 * and initiliazes it with a specific char
 *@size: size of memory to allocate
 *@c: char to fill the array
 *Return: pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	int i = 0;

	if (size == 0)
	return (NULL);
	array = malloc(size);
	if (array == NULL)
		return (NULL);
	while (i < (int) size)
	{
		array[i] = c;
		i++;
	}

	return (array);

}
