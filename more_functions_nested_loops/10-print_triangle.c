#include "main.h"
/**
 * print_triangle - prints a line diagonally in the terminal
 * and the length is determined by the n argument
 * @n: length argument of the line being drawn
 */
void print_triangle(int n)
{
	int i;
	int j;

	if (n <= 0)
		_putchar('\n');
	else
	{
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (j < n - 1 - i)
				_putchar(' ');
			else
				_putchar('#');
		}
				_putchar('\n');
	}
	}
}
