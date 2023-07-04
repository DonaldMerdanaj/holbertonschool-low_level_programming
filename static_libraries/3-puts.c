#include "main.h"
#include <string.h>
/**
 *_puts - displays a given string to the stdout
 *@s: string
 */
void _puts(char *s)
{
	int i = 0;
	int l = (int) strlen(s);

	while (i < l)
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');

}
