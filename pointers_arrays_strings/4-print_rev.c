#include "main.h"
#include <string.h>
/**
 *print_rev - reverses the string
 *@s: string
 */
void print_rev(char *s)
{
	int i = (int) strlen(s) - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');

}
