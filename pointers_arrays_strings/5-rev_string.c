#include "main.h"
#include <string.h>
/**
 *rev_string - reverses the string
 *@s: string
 */
void rev_string(char *s)
{
	int i = 0;
	int j = (int) (strlen(s) / 2);
	int m = (int) strlen(s) - 1;
	char t;

	while (i < j)
	{
		t = s[i];
		s[i] = s[m];
		s[m] = t;
		i++;
		m--;
	}
}
