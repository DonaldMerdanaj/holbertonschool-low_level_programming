#include "main.h"
/**
 * print_line - prints a line accros the terminal
 * and the length is determined by the n argument
 * @n: length argument of the line being drawn
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
