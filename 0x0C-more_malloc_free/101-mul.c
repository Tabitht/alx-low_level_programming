#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * notinteger- to check if an element is an integer
 * @s: string to check from
 * Return: returns an integer
 */
int notinteger(char *s)
{
	int i = 0;

	while(s[i] != '\0')
	{
		if (s[i] < '0' && s[i] > '9')
			return (1);
		i++;
	}
	return (0);
}
/**
 * main- entry point to run the code
 * @argc: the number of argument in the command line
 * @argv: arguments in the command line
 * Return: to return the multiplication of two positive integers
 */
int main(int argc, char *argv[])
{
	int i, j, mul = 1;
	char a[6] = {'E', 'r', 'r', 'o', 'r', '\0'};

	if (argc != 3)
	{
		for (i = 0; i < 6; i++)
		{
			_putchar(a[i]);
		}
		_putchar('\n');
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		if (notinteger(argv[i]))
		{
			for (j = 0; j < 5; j++)
				_putchar(a[i]);
			_putchar('\n');
			exit(98);
		}
		else
			mul *= atoi(argv[i]);
	}
	return (mul);
}






