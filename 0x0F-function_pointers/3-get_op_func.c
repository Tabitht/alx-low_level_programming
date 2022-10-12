#include "3-calc.h"
/**
 * get_op_func- to get a function it points to to perform an operation
 * @s: operator passed as argument in the main program
 * Return: returns an int
 */
int (*get_op_func(char *s))(int, int)
{

