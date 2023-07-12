#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * str_concat - concatenates two strings
 *@s1: first string
 *@s2: second string
 *Return: pointer to the string concatenated
 */
char *str_concat(char *s1, char *s2)
{
	size_t len;
	char *new;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len = strlen(s1) + strlen(s2);
	new = malloc(len + 1);
	if (new == NULL)
		return (NULL);
	strcpy(new, s1);
	strcat(new, s2);
	return (new);
}
