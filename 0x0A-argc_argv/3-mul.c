#include <stdio.h>
#include <stdlib.h>
/**
 * main- entry point to the program
 * @argc: argument count in command line
 * @argv: arguments in command line
 * Return: returns an integer
 */
int main(int argc, char *argv[])
{
	int i;
	int x;
	int mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
		for (i = 1; i < argc; i++)
		{
			x = atoi(argv[i]);
			mul *= x;
		}
	printf("%d\n", mul);
	return (0);
}
