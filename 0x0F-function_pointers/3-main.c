#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include <string.h>
/**
 * main- entry point to run the code
 * @argc: the number of arguments in command line
 * @argv: arguments in command line
 * Return: returns an integer
 */
int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (strlen(argv[2]) != 1)
	{
		printf("Error\n");
		exit(99);
	}
	if (!(get_op_func(argv[2])))
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	printf("%d\n",  (*get_op_func(argv[2]))(num1, num2));
	return (0);
}
