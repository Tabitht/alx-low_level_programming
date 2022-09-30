#include <stdio.h>
#include <stdlib.h>
/**
 * main- entry point to run the code
 * @argc: the number of arguments supplied to command line
 * @argv: arguments supplied to command line
 * Return: returns an integer
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!(*argv++ >= 48 && *argv++ <= 57))
		{
			printf("Error\n");
			return (1);
		}
		else
			sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	if (argc < 2)
		printf("%d\n", 0);
	return (0);
}
