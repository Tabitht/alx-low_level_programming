#include "main.h"
void print_alphabet_x10(void)
{
	int i;
for (i = 97; i <= 122; i++)
{
	_putchar(i);
	_putchar('\n');
if ('\n' == 10)
{
	break;
}
}
	return (0);
}
