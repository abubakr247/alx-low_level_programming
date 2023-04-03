#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenate arguments
 * Description: a function that concatenates
 * all the arguments of your program
 * @ac: number of arguments passed to the function
 * @av: arguments passed to the function
 * @: pointer to the concatenated string
 * Return: a pointer to the concatenated string
 * or NULL if fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, chr = 0, total = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			chr++;
		}
			chr++;
	}
	str = (char *) malloc((chr + 1) * sizeof(char));
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[total] = av[i][j];
				total++;
		}
		str[total] = '\n';
				total++;
	}
	return (str);

}
