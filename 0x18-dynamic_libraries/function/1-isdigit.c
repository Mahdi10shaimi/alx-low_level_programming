#include "main.h"

/**
 * _isdigit - fonction
 * _isdigit: fonction that check for digit
 * @c: parametre
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
