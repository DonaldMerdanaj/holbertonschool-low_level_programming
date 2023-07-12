#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 *array_range - function that creates an array of integers
 *@min: min value
 *@max: max value
 *Return: the pointer to the newly create array
 */
int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < (max - min + 1); i++)
	{
		array[i] = min + i;
	}
	return (array);
}
