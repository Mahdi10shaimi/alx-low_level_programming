#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n : parametre
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int x, sum;
	unsigned int i;
	va_list args;

	if (n == 0)
		return (0);
	va_start(args, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		sum += x;
	}
	va_end(args);
	return (sum);
}
