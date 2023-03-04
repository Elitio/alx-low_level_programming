#include "main.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>

/**
 * print_chessboard - This is the function
 *
 * @a: This is the parameter
 * Return: Will return void
 */


void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
		}
		putchar('\n');
	}
}
