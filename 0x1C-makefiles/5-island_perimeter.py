#!/usr/bin/python3
"""
    a module that defines an island_perimeter function
"""


def island_perimeter(grid):
    """a function that returns the perimeter of the island described in grid
    """
    perimeter = 0

    if grid:
        for i in range(len(grid)):
            for j in range(len(grid[i])):
                if grid[i][j] == 1:
                    l, b = len(grid), len(grid[i])
                    if i > 0 and grid[i - 1][j] == 0:
                        perimeter += 1
                    if j > 0 and grid[i][j - 1] == 0:
                        perimeter += 1
                    if i + 1 < l and grid[i + 1][j] == 0:
                        perimeter += 1
                    if j + 1 < b and grid[i][j + 1] == 0:
                        perimeter += 1

    return perimeter
