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

printf("size of a char:%2lu byte(s)\n", sizeof(char));

printf("size of an int:%2lu byte(s)\n", sizeof(int));

printf("size of a long int:%2lu byte(s)\n", sizeof(long int));

printf("size of a long long int:%2lu byte(s)\n", sizeof(long long int));

printf("size of a float:%2lu byte(s)\n", sizeof(float));

	return (0);
}
