#include "main.h"
#include <stdio.h>
/**
 *swap_int - swaps the value of two integers
 *@a: first int val
 *@b: second in val
 */
void swap_int(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
