#include "main.h"
/**
 * create_array - function that creates an array of chars
 * @size : parametre
 * @c : parametre
 * Return: pointer or null
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(size * sizeof(char));
	if (arr == NULL)
	{
		printf("insufficient memory\n");
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}
	}
	return (arr);
}
