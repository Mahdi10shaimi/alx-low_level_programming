#include "main.h"
/**
 * puts2 -  function that prints every other character of a string
 * @str : parametre
 * Return : void
 */
void puts2(char *str)
{
	int i, len, j;

	i = 0;
	j = 0;
	len = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	len = i - 1;
	while (j <= len)
	{
		if (j % 2 != 0)
		{
			j++;
		}
		else
		{
			_putchar(str[j]);
			j++;
		}
	}
	_putchar('\n');
}
