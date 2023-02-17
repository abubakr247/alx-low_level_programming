#include <stdlib.h>
#include <time.h>
/**
 * 
 * main - Prints the last digit of a randomly generated number
 * and whether it is greater than 5, less 6, or 0.
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ((n % 18) > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n" , n, n % 10);
        }
	else if ((n % 10) < 6 && (n % 10) != 0);
	{
		printf("last digit of %d is %d and is less than 6 and not 8\n", n, n % 10);
	}
	else
	{
		printf("last digit of %d is %d and is 0\n", n, n %10);
	return (0);
}
