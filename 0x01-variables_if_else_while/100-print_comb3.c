#include <stdio.h>
/**
 * main - entry point
 * description: A C program that print with put function
 * Return: always 0
 */
int main(void)
{
	int i = 0, o;

	while (i <= 9)
	{

		o = 0;
		while (o <= 9)
		{
			if (i != o && i < o)
			{
				putchar(i + 48);
				putchar(o + 48);

				if (i + o != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			o++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
