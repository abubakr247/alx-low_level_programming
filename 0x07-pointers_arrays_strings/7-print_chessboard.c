#include "main.h"

/**
  * print_chessboard - Print the chessboard
  * @a: array of pieces
  *
  * Return: Nothing.
  */
void print_chessboard(char (*a)[8])
{
	int j, c;

	for (j = 0; j < 8; j++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(a[j][c]);
		}

		_putchar('\n');
	}
}
