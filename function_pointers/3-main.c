#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
/**
 *main - check the code
 *@argc: arguments count
 *@argv: argument list
 *Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int result;
	int (*function)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	function = get_op_func(argv[2]);
	result = function(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}
