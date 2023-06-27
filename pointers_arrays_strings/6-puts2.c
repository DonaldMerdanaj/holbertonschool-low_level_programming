#include "main.h"
#include <string.h>
/**
 *puts2 - unction that prints every other character of a string,
 *starting with the
 *first character, followed by a new line
 *@s: string
 */
void puts2(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (i % 2 == 0)
		_putchar(s[i]);
		i++;
	}
		_putchar('\n');
}
