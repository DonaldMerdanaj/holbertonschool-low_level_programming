#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _strdup - copys a given string and duplicates it
 *@str: string to be duoplicated
 *Return: pointer to the string duplicated
 */
char *_strdup(char *str)
{
	size_t len;
	char *new;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str);
	new = malloc(len + 1);
	if (new == NULL)
		return (NULL);
	strcpy(new, str);
	return (new);
}
