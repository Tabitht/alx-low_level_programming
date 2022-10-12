#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main- entry point to run the code
 * @argc: number of arguments
 * @argv: arguments
 * Return: returns an int
 */
int main(int argc, char *argv[])
{
	int byte, j;
	char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	byte = atoi(argv[1]);
	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}
	ptr = (char *)main;
	for (j = 0; j < byte - 1; j++)
	{
		printf("%02hhx ", ptr[j]);
	}
	printf("%02hhx\n", ptr[j]);
	return (0);
}
