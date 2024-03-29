#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array : parametre
 * @size : parametre
 * @cmp : parametre
 * Return: 0 or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	i = 0;

	while (i < size)
	{
		if ((cmp)(array[i]) != 0)
			return (i);
		i++;
	}
	return (-1);
}
