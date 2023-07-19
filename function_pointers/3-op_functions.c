#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 *op_add - function that returns the sum of two integers
 *@a: first number
 *@b: second number
 *Return: sum of the numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - functions that returns the difference of a and b
 *@a: first number
 *@b: second number
 *Return: the diferrence
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - returns the product of a and b
 *@a: first number
 *@b: second number
 *Return: the product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - returns the  result of the division
 *@a: first number
 *@b: second number
 *Return: the result of the division
 */

int op_div(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 *op_mod - function that  returns the remainder of the division of a by b
 *@a: first number
 *@b: second number
 *Return: the remainder of the division
 */

int op_mod(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
