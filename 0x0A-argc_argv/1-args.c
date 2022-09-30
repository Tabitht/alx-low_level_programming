#include <stdio.h>
/**
 * main- entry point to run my code
 * @argc: to give number of arguments entered in command line
 * @argv: arguments in command line
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
