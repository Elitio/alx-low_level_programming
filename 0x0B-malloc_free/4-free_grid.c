#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * free_grid - This is the prototype function to free malloc
 *
 * @grid: first pointer to a pointer parameter
 * @height: The second parameter representing heiht of the grid
 * Return: Will return void
 */


void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
