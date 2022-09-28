#include "main.h"

/**
 * print_chessboard - Prints a chessboard.
 * @a: The chessboard to be printed.
 */
void print_chessboard(char (*a)[8])
{
	int val1, val2;

	for (val1 = 0; a[val1][7]; val1++)
	{
	for (val2 = 0; val2 < 8; val2++)
	_putchar(a[val1][val2]);

	_putchar('\n');
	}
}
