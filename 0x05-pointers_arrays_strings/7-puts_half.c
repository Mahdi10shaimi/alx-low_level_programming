#include "main.h"
/**
 * puts_half - function that prints half of a string
 * @str : parametre
 * Return : void
 */
void puts_half(char *str)
{
	int i = 0;
	int len = 0;
	int middle;
	int middle_odd;

	while (str[i] != '\0')
	{
		i++;
	}
	len = i;
	middle = len / 2;
	middle_odd = (len + 2) / 2;
	if (len % 2 == 0)
	{
		while (middle < len)
		{
			_putchar(str[middle]);
			middle++;
		}
	}
	else
	{
		while (middle_odd < len)
		{
			_putchar(str[middle_odd]);
			middle_odd++;
		}
	}
	_putchar('\n');
}
