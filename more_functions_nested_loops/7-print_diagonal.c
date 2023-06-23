#include "main.h"
/**
 * print_diagonal - prints a line diagonally in the terminal
 * and the length is determined by the n argument
 * @n: length argument of the line being drawn
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
		_putchar('\n');
	else
	{
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
			_putchar('\\');
			_putchar('\n');
	}
	}
}
