#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - function that take a pointer to an int
 * @n: parametre
 * Return: void.
 */
void reset_to_98(int *n)
{
	*n = 98;
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = 402;
    printf("n=%d\n", n);
    reset_to_98(&n);
    printf("n=%d\n", n);
    return (0);
}
