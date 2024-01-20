#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: parametre
 * Return:pointer
 */
void *malloc_checked(unsigned int b)
{
	int *m;

	m = malloc(b);
	if (m == NULL)
		exit(98);
	return (m);
}
