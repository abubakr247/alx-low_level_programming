#include "main.h"
#include <stdlib.h>
/**
 * strtow - split a string
 * Description: a function that splits a string into words
 * and returns a pointer to an array of strings (words)
 * @str: string passed to the function
 * @: a pointer to araay of splited words
 * Return: a pointer to a array of splited words
 */
char **strtow(char *str)
{
	char **arr;
	int i, j = 0, k = 0, l = 0, word, count, m;
	char *ptr;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' && (str[i + 1] != ' ' || str[i + 1] == '\0'))
			k++;
	}
	arr = (char **)malloc((i + 1) * sizeof(char *));
	if (arr == NULL)
	{
		return (NULL);
	}
		for (word = 0; str[word] && j <= k; word++)
		{
			count = 0;
			if (str[word] != ' ')
			{
				for (i = word ; str[i] != '\0'; i++)
				{
					if (str[i] == ' ')
						break;
					count++;
				}
			*(arr + j) = (char *)malloc((count + 1)  * sizeof(char));
			if (*(arr + j) == NULL)
			{
				for (l = 0; l <= j; l++)
				{
					ptr = arr[l];
					free(ptr);
				}
				free(arr);
				return (NULL);
			}
				for (m = 0; word < i; word++)
				{
					arr[j][m] = str[word];
					m++;
				}
			arr[j][m] = '\0';
			j++;
			}
		}
		arr[j] = NULL;
	return (arr);
}
