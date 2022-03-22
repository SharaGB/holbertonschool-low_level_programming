#!/usr/bin/python3
"""
Function def island_perimeter(grid)
"""


def island_perimeter(grid):
    """ Returns the perimeter of the island described in grid. """
    count = 0
    repeat = 0
    for row in range(len(grid)):
        for col in range(len(grid[row])):
            if grid[row][col] == 1:
                count += 1
                if row != 0 and grid[row - 1][col] == 1:
                    repeat += 1
                if col != 0 and grid[row][col - 1] == 1:
                    repeat += 1
    return count * 4 - repeat * 2
