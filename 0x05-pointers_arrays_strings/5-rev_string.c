#include "main.h"
/**
 * rev_string - function that reverses a string.
 * @s: parametre.
 * Return: void.
 */
void rev_string(char *s)
{
	int i = 0;
	int len = 0;
	int j = 0;
	char string;
	int middle;

	while (s[i] != '\0')
	{
		i++;
		len++;
	}
	middle = len / 2;
	for (j = 0; j < middle; j++)
	{
		string = s[j];
		s[j] = s[len - 1 - j];
		s[len - 1 - j] = string;
	}
}
