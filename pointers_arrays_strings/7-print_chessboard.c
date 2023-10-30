#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints the chess board received from main
 * @a: receives the board from main
 * Return: void function doesn't return anything, only prints
*/

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
}
