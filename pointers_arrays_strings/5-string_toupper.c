#include "main.h"
#include <string.h>
/**
 *string_toupper -  function that changes all the lowercase letters
 * of a string to uppercase
 *@s: pointer to string literal
 *Return: the string in uppercase
*/
char *string_toupper(char *s)
{
	int length = strlen(s);
	int i = 0;

	for (i = 0; i < length; i++)
	{
	if (s[i] >= 97 && s[i] <= 122)
	{
		s[i] = s[i] - 32;
	}
	}
	return (s);
}
