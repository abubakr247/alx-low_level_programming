#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - multiply 2 numbers
 * Description: a program that multyply 2 positive numbers
 * @argc: number of command line arguments passed to the main
 * @argv: array of command line arguments passed to the main
 * Return: return 0 (success)
 */
int main(int argc, char **argv)
{
	int i, j;

	long double total = 1;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	total = atoi(argv[1]) * atoi(argv[2]);
	printf("%.0Lf\n", total);
	return (0);
}
