#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	char lw = 'a';
	char up = 'A';

	while (lw <= 'z')
	{
		putchar(lw);
	lw++;
	}
	while (up <= 'Z')
	{
		putchar(up);
	up++;
	}
	putchar('\n');
	return (0);
}
