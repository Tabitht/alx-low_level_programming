#include "main.h"
/**
 * cap_string- to capitalize the words of a string
 * @k: string to be tested
 * Return: returns a character
 */
char *cap_string(char *k)
{
	int i;

for (i = 0; k[i] != '\0'; i++)
{
if (i == 0)
{
	if (k[i] >= 'a' && k[i] <= 'z')
	{
		k[i] = k[i] - 32;
	}
}
<<<<<<< HEAD
if ((k[i - 1] == ' ' || k[i - 1] == '\t' || k[i - 1] == '\n' && (k[i] || k[i - 1] == ',' 
|| k[i - 1] == ';' || k[i - 1] == '.' k[i - 1] == '!' k[i - 1] == '?' 
&& (k[i] >= 'a' && k[i] <= 'z'))
=======
	if ((k[i - 1] == ' ' || k[i - 1] == '\t' || k[i - 1] == '\n'
|| k[i - 1] == ',' || k[i - 1] == ';' || k[i - 1] == '.' ||
k[i - 1] == '!' || k[i - 1] == '?' || k[i - 1] == '"' || k[i - 1]
== '(' || k[i - 1] == ')' || k[i - 1] == '{' || k[i - 1] ==
'}') && (k[i] >= 'a' && k[i] <= 'z'))
>>>>>>> a80edbde7a6d679d6ad515631781ca212bc66008
	{
		k[i] = k[i] - 32;
	}
	else
	{
	k[i] = k[i];
	}
}
return (k);
}
