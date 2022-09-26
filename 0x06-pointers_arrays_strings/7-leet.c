#include "main.h"
/**
 * leet- to encode a string
 * @b: string to be tested
 * Return: returns a char
 */
<<<<<<< HEAD
char *leet(char *n)
{

=======
char *leet(char *b)
{
	int i, j;

	char s[] = "aAeEoOtTlL";
	char m[] = "4433007711";

	for (i = 0; b[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (b[i] == s[j])
			{
				b[i] = m[j];
				break;
			}
		}
	}
	return (b);
>>>>>>> a80edbde7a6d679d6ad515631781ca212bc66008
}

