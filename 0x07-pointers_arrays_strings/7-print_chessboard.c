#include "main.h"
/**
*print_chessboard- prints a chess-board
*
*@a: multidimentional array
*
*/
void print_chessboard(char (*a)[8])
{
	int s, r;

	for (s = 0; s < 8; s++)
	{
		for (r = 0; r < 8; r++)
		{
			_putchar(a[s][r]);
		}
		_putchar('\n');
	}
}
