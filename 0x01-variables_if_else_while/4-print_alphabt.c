#include <stdio.h>
/**
  *main- entry point to run the code
  *
  *
  * Return: to always return 0
  */
int main(void)
{
	char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if ((ch == 'q') || (ch == 'e'))
continue;
putchar(ch);
}
putchar('\n');

	return (0);
}


