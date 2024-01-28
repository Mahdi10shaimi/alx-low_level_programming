#include "3-calc.h"
/**
 * op_add - function that add 2 numbers
 * op_sub - function that subtract 2 numbers
 * op_mul - function that multiplicate 2 numbers
 * op_div - function that divide 2 numbers
 * op_mod - function that modulo 2 numbers
 * @a : parametre
 * @b : parametre
 * Return: different results
 */
int op_add(int a, int b)
{
	return (a + b);
}
int op_sub(int a, int b)
{
	return (a - b);
}
int op_mul(int a, int b)
{
	return (a * b);
}
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (100);
	}
	return (a / b);
}
int op_mod(int a, int b)
{
	if (b == 0)
        {
                printf("Error\n");
                return (100);
        }
	return (a % b);
}
