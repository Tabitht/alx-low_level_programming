#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main- entry point to run the code
 * @argc: the number of arguments in command line
 * @argv: arguments in command line
 * Return: returns an integer
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*op)(int, int);
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op = get_op_func(argv[2]);
	if (!op)
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	result = op(num1, num2);
	printf("%d\n", result);
	return (0);
}
