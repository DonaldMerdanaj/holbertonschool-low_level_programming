#include <stdio.h>
#include "main.h"

/**
 *print_binary - function that prints a binary representation of
 *a decimal number
 *@n: number
 */

void print_binary(unsigned long int n)
{
	if ((n >> 1) == 0)
	{
		_putchar('0' + (n & 1));
	}
	else
	{
		print_binary(n >> 1);
		_putchar('0' + (n & 1));
	}
}
