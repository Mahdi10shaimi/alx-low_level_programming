#include "variadic_functions.h"
/**
 * print_strings - function that prints strings
 * @separator : parametre
 * @n : parametre
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *x;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n ; i++)
	{
		x = va_arg(args, char *);
		if (separator == NULL || i == n - 1)
			printf("%s", x);
		else if (x == NULL)
			x = "(nil)";
		else
			printf("%s%s", x, separator);
	}
	va_end(args);
	printf("\n");
}
