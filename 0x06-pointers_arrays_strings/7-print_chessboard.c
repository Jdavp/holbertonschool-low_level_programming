#include "holberton.h"

/**
 *print_chessboard - print chess
 *
 *print chess
 *
 *@a: pointer
 *
 *Return: returns what its left of a string after comparing
 **/

void print_chessboard(char (*a)[8])
{
	int row;
		int column;

		for (row = 0; row < 8; row++)
		{
			for (column = 0; column < 8; column++)
				_putchar (a[row][column]);
			_putchar ('\n');
		}
}
