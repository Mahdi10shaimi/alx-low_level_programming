#include "main.h"

/**
 * _isupper - fonction
 * _isupper: fonction that check for uper case
 * @c: parametre
 * Return: 0 or 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
