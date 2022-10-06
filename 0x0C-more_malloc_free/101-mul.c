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
 * print_int- to print integers
 * @s: string of integers
 * Return: returns an integer
 */
int print_int(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(a[i] - '0');
	}
	return (0);
}
/**
 * mul_int- to multiply two strings of integers
 * @a: first string of integer
 * @b: second string of integer
 * Return: returns a character
 */
char mul_int(char *a, char *b)
{
	char result;
	int i, j, k, l;

	for (i = 0; a[i] != '\0'; i++)
		;
	for (j = 0; b[j] != '\0'; j++)
		;
	if (i > j)
		k = i;
	else
		k = j;
	for (l = 0; l < k; l++)
	{



/**
 * main- entry point to run the code
 * @argc: the number of argument in the command line
 * @argv: arguments in the command line
 * Return: to return the multiplication of two positive integers
 */
int main(int argc, char *argv[])
{
	int i, j, mul = 1;
	char a[5] = {'E', 'r', 'r', 'o', 'r', '\0'};

	if (argc != 3)
	{
		for (i = 0; i < 5; i++)
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
			mul *= (argv[i]);
	}
	return (0);
}






