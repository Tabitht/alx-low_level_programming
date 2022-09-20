#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
/**
* main- entry point to run the code
*
*  Return: 0
*/
int main(void)
{
	int r, n, i;
	char a[100];

	n =0;
	i = 0;
	srand(time(NULL));
	while (n < 2645)
	{
		r = rand() % 122;
		if (r > 32)
		{
			a[i++] = r;
			n += r;
		}
	}
		a[i++] = (2772 - n);
		a[i] = '\0';
		printf("%s", a);

	return (0);
}
