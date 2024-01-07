#include "main.h"
/**
 * print_rev - function that prints a string, in reverse, followed by a new line.
 * @s: parametre
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;
	int len = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	while (s[len - 1 - j] != 0)
	{
		_putchar(s[len - 1 - j]);
		j++;
	}
	_putchar('\n');
}
