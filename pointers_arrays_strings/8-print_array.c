#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *print_array - function that prints n elements of an array of integers
 *@a: pointer to the array
 *@n: he number of elements of the array to be printed
 */
void print_array(int *a, int n)
{
	int i = 0;

	if (n < 0)
	printf("\n\n");
	while (i < n)
	{
		if (i == n - 1)
			printf("%i\n", *(a + i));
		else
		printf("%i, ", *(a + i));
		i++;
	}
}
