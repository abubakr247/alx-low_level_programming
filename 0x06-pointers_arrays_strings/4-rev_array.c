#include "main.h"

/**
 * reverse_array - Reveres the content of an arrayof integers.
 * @a: The array of integers to be reversed.
 * @n: the number of elenents in the array.
 *
 */

void reverse_array(int *a, int n)
{
	int tmp, i;
	for (i = n - 1; i >= n / 2; i--)
	{
		tmp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tmp;
	}
}
