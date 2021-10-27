#include "main.h"
/**
 * free_grid - Fress a 2 dimensional grid
 * @grid: Check array
 * @height: Check
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
