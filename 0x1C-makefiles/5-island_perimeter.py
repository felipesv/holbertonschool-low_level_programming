#!/usr/bin/python3
"""returns the perimeter of the island"""


def island_perimeter(grid):
    """returns the perimeter of the island"""
    count = 0
    for i in range(1, len(grid) - 1):
        for j in range(1, len(grid[i]) - 1):
            if grid[i][j] == 1:
                count += 1
    val = (count * 2) + 2
    return val
