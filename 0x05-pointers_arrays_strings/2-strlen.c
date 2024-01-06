#include "main.h"
/**
 * _strlen - function that returns the length of a string.
 * @s: parametre
 * Return: lenght
 */
int _strlen(char *s)
{
	int d;

	d = 0;
	while (s[d] != '\0')
	{
		d++;
	}
	return (d);
}
