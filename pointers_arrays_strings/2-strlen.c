#include "main.h"
/**
 *_strlen - find the length of a given string
 *@s: string
 *Return: returns the length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
