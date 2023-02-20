#include <stdio.h>

/**
 * main a program that prints the alphabet
 * Return: Always (Success)
 */
 int main(void)
{
	char b;
	for (b = 'a'; b <= 'z'; b++)
		putchar (b);
	for (b = 'A'; b <= 'Z'; b++)
		putchar (b);
	putchar ('\n');
	return (0);
}
