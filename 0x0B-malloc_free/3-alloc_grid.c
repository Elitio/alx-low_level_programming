#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/**
 * alloc_grid - This is the prototype funnction
 *
 * @width: This is the width row
 * @height: This is the height column
 *Return: Will return a pointer
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
