#include "variadic_functions.h"
/**
 * print_all - function that print anything
 * @format : parametre
 * Return : nothing
 */
void print_all(const char * const format, ...)
{
	char *s, *separator = "";
	int i = 0;

	va_list(args);

	va_start(args, format);
	if (format[i])
	{
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", separator, s);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	}
	printf("\n");
	va_end(args);
}