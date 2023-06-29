#include "main.h"
#include <string.h>
/**
 *_strcmp -  function that copies a string
 *@s1: first string to be compared
 *@s2: string to be compared with s1
 *Return: returns an integer indicating the result of the
 *comparison
*/
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; i < (int) strlen(s1); i++)
	{
		if (s1[i] - s2[i] != 0)
			return (s1[i] - s2[i]);
	}
	return (0);

}
