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
float f = sizeof(float);

printf("size of a char:%2lu byte(s)\n", ch);

printf("size of an int:%2lu byte(s)\n", i);

printf("size of a long int:%2lu byte(s)\n", li);

printf("size of a long long int:%2lu byte(s)\n", lli);

printf("size of a float:%2.0f byte(s)\n", f);

	return (0);
}
