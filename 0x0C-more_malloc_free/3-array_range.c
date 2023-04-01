#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - create array of integers
 * Description : a function that creates an
 * array of integers values from min (included)
 * to max (included), ordered from min to max
 * @min: The starting number of the array
 * @max: The last number of the array
 * @: a pointer to the array
 * Return: a pointer to the array or NULL if fails
 */
int *array_range(int min, int max)
{
	int i, range, count = 0;
	int *arr = NULL;

	if (min > max)
		return (NULL);
	range = max - min + 1;
	arr = (int *)malloc(range * sizeof(int));
	if (arr == NULL)
		return (NULL);
		else
	{
		for (i = min; i <= max; i++)
		{
			arr[count] = i;
			count++;
		}
		return (arr);
	}
}

