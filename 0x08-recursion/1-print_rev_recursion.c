#include "main.h"

/**
 * _print_rev_recursion - print a string inrevers
 * @s: the string to revrse
 *
 * Return: nothing.
 */
void  _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	s++;

	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
