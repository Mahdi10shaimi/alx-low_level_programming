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

	while (str[i] != '\0')
	{
		i++;
	}
	len = i;
	middle = len / 2;
	while (middle < len)
	{
		_putchar(str[middle]);
		middle++;
	}
	_putchar('\n');
}
