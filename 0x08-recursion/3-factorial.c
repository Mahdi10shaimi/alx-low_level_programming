#include "main.h"
/**
 * factorial - function that returns the factorial
 * @n : parametre
 * Return: number
 */
int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else if (n == 0)
		return (1);
	else
		return (-1);
}
