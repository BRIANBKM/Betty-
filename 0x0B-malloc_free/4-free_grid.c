#include "main.h"
/**
 * free_grid - frees a2 dimensional grid
 * @grid: multidimensional array of intergers
 * @height: heighr of the grid
 * return: no return
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
				free(grid[height]);
		free(grid);
	}
}
