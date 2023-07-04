#include "main.h"
#include <string.h>

/**
 * _strspn - function that gets the length of a prefix substring
 *@s: string to be searched
 *@accept: characters to be matched
 *Return: the number of bytes in the initial segment s which consist only
 * of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	int found;

	for (i = 0; i < (unsigned int) strlen(s); i++)
	{
		found = 0;

		for (j = 0; j < (unsigned int) strlen(accept); j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (!found)
			return (i);

	}
	return (i);

}
