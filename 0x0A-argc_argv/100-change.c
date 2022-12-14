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
	int i = 0, cents;

	if (argc == 2)
	{
		cents = atoi(argv[1]);
		while (cents > 0)
		{
			i++;
			if ((cents - 25) >= 0)
			{
				cents -= 25;
				continue;
			}
			if ((cents - 10) >= 0)
			{
				cents -= 10;
				continue;
			}
			if ((cents - 5) >= 0)
			{
				cents -= 5;
				continue;
			}
			if ((cents - 2) >= 0)
			{
				cents -= 2;
				continue;
			}
			cents--;
		}
		printf("%d\n", i);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
