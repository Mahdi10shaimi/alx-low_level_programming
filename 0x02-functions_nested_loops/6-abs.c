#include "main.h"

/**
 * _abs - fonction
 * _abs: fonction that print the absolut value
 * @i: parametre
 * Return: i or -i
 */
int _abs(int i)
{
	if (i < 0)
	{
		return (-i);
	}
	else if (i >= 0)
	{
		return (i);
	}
	return (0);
}
