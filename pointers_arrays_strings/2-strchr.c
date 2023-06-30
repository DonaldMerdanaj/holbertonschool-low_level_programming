#include "main.h"
#include <string.h>

/**
 *_strchr - function that locates a character in a string
 *@s: string being searched
 *@c: character we want to find
 *Return: pointer to the first occurence of the character c
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i <= (int) strlen(s); i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (NULL);
}
