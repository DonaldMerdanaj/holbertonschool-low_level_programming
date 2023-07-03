#include <stdio.h>
#include "main.h"
/**
 * factorial - Calculates factorial number.
 * @n: number to calculate factorial.
 * Return: facorial number
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
		return (1);
	else if (n > 0)
		return (n * factorial(n - 1));
	else
		return (-1);
}
