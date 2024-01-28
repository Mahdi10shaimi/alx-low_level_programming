#include "function_pointers.h"
/**
 * array_iterator - function that ...
 * @array : parametre
 * @size : parametre
 * @action : parametre
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
