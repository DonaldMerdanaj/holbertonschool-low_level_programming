#include "main.h"
#include <string.h>

/**
 * _strpbrk - function that seaches a string for any set of bytes
 *@s: string to be searched
 *@accept: characters to be matched
 *Return: a pointer to the byte s that matches of of the bytes in accept
 * or NULL if no such byte found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; i < (int) strlen(s); i++)
	{
		for (j = 0; j < (int) strlen(accept); j++)
			if (s[i] == accept[j])
				return (&s[i]);
	}
	return (NULL);
}
