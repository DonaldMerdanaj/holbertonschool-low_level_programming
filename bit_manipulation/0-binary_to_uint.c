#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
/**
 *binary_to_uint - function that converts a binary to an unsigned int
 *@b: binary
 *Return: the converted number or 0 if there is one or more chars in the\
 *string b that is not 0 or 1 and if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int decimal = 0;
	int length;

	if (b == NULL)
		return (0);
	length = strlen(b) - 1;
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
		{
			decimal += 1 << length;
		}
		length--;
		i++;
	}
	return (decimal);
}
