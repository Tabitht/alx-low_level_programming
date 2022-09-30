#include <stdio.h>
#include <stdlib.h>
/**
 * notinteger- to check if a given string is integer
 * @s: string to check
 * Return: returns an integer
 */
int notinteger(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
			return (1);
		i++;
	}
	return (0);
}

/**
 * main- entry point to run the code
 * @argc: the number of arguments supplied to command line
 * @argv: arguments supplied to command line
 * Return: returns an integer
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	while (--argc)
	{
		if (notinteger(argv[argc]))
		{
			printf("Error\n");
			return (1);
		}
		else
			sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
