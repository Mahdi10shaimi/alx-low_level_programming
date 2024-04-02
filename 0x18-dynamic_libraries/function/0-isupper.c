#include "main.h"

/**
 * _isupper - fonction
 * _isupper: fonction that check for uper case
 * @c: parametre
 * Return: 0 if c is uppercase or 1 if c is lowercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
