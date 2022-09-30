#include <stdio.h>
/**
 * main- entry point to run the code
 * @argc: number of arguments passed to command line
 * @argv: arguments passed to command line
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
