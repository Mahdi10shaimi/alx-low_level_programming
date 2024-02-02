#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers
 * @separator : parametre
 * @n : parametre
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	int x;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		if (separator == NULL)
		{
			printf("%d", x);
		}
		else if (i == n - 1)
			printf("%d", x);
		else
			printf("%d%s", x, separator);
	}
	va_end(args);
	printf("\n");
}
