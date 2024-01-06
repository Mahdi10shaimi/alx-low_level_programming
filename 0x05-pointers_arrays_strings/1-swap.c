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
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int a;
	int b;

	a = 98;
	b = 42;
	printf("a=%d, b=%d\n", a, b);
	swap_int(&a, &b);
	printf("a=%d, b=%d\n", a, b);
	return (0);
}
