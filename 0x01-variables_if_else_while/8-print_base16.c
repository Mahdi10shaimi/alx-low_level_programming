#include <stdio.h>
/**
 * main - entry point
 * description: A C program that print with put function
 * Return: always 0
 */
int main(void)
{
	int i = 48;

	while (i <= 102)
	{
		putchar(i);

		if (i == 57)
			i +=  39;
		i++;
	}
	putchar('\n');
	return (0);
}
