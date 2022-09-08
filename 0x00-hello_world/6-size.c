	#include <stdio.h>
/**
 * main- to ensure the program runs
 * void- to return it to 0
 * Description: main ensures that it runs
(* section header:1)*
 * Return: to return 0
 */
/* sizeof is used to determine data size*/
	int main(void)
{
char ch = sizeof(char);
int i = sizeof(int);
long int li = sizeof(long int);
long long int lli = sizeof(long long int);
double f = sizeof(double);

printf("size of a char:%2d\n", ch);

printf("size of an int:%2d\n", i);

printf("size of a long int:%2d\n", li);

printf("size of a long long int:%2d\n", lli);

printf("size of a float:%2d\n", f);

	return (0);
}
