#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalizes words of a string
 *@s: for the word
 *
 * Return: char value
 */
char *cap_string(char *s)
{
	int a = 0, i;
	int css = 13;
	char spc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (s[a])
	{
		i = 0;

		while (i < css)
		{
			if ((a == 0 || s[a - 1] == spc[i]) && (s[a] >= 97 && s[a] <= 122))
				s[a] -= 32;

					i++;
		}

		a++;
	}
	return (s);
}
