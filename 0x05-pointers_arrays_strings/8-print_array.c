#include "main.h"
/**
 * print_array -  function that prints n elements of an array of integers
 * @a : parametre
 * @n : parametre
 * Return : void
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
			i++;
		}
		else
			i++;
	}
	printf("\n");
}
