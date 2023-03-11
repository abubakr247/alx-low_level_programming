#include <stdio.h>
#include <stdlib.h>
/**
 * main - print all arguments of the program separated by new line.
 * @argc: argument count or size of arguments.
 * @argv: argument vector
 *
 * Return: always 0.
 */
int main(int argc, char **argv)
{
	int num = 0;

	while (num < argc)
	{
		printf("%s\n", *(argv + num));
		num++;
		(*argv)++;
	}
	return (0);
}
