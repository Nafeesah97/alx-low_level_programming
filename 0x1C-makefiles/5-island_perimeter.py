#!/usr/bin/python3
"""
This module contains a function
The function is used to compute the perimeter of island
author: Nafeesah
"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""
    p = 0
    for i in range(1, len(grid) - 1):
        for j in range(1, len(grid[i]) - 1):
            if grid[i][j] == 1:
                if grid[i][j - 1] == 0:
                    p += 1
                if grid[i - 1][j] == 0:
                    p += 1
                if grid[i][j + 1] == 0:
                    p += 1
                if grid[i + 1][j] == 0:
                    p += 1
    return p
