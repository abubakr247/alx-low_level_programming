#include <stddef.h>
#include "function_pointers.h"
/**
 * print_name - print function
 * DESCRIPTION: a function that prints a name
 * @name: name to be printed
 * @f: pointer to function print something
 * @: parameter for function f
 * RETURN: 0 for success
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
