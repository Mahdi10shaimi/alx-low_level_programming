#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: parametre
 * @argv: parametre
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int multp;

	multp = atoi(argv[1]) * atoi(argv[2]);
	if (argc != 3)
	{
		printf("Error\n");
		return (-1);
	}
	else
		printf("%d\n", multp);
	return (0);
}
