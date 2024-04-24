#include "main.h"
/**
 * free_grid - free grid
 * @grid: grid of memories
 * @height: int
 * Return: nothing
*/

void free_grid(int **grid, int height)
{
	int a = 0;

	for (; a < height; a++)
		free(grid[a]);
	free(grid);
}
