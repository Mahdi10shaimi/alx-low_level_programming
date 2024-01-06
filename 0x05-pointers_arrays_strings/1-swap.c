#include "main.h"
#include <stdio.h>
/**
 * swap_int - function that swaps the values of two integers.
 * @a: parametre
 * @b: parametre
 * return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
