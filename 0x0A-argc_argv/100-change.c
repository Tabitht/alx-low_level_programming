#include <stdio.h>
#include <stdlib.h>
/**
 * main- entry point to run code
 * @argc: number of arguments passed to command line
 * @argv: arguments passed to command line
 * Return: returns an integer
 */
int main(int argc, char *argv[])
{
	int i, j, x, y, cent = 0;
	char b[] = {25, 10, 5, 2, 1};

	if (argc == 2)
	{
		for (i = 1; i < argc; i++)
		{
			x = atoi(argv[i]);
			if (x < 0)
				printf("%d\n", 0);
			for (j = 0; j < 6; j++)
			{
				y = atoi(b[j]);
				while (y <= x)
					cent += y;
				if (y < cent && cent == x)
					cent += y;
			}
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
