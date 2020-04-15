#!/usr/bin/python3
"""returns the perimeter of the island"""


def island_perimeter(grid):
    """returns the perimeter of the island"""
    count1 = 0
    count2 = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if i > 0 and grid[i - 1][j] == 1:
                    count2 += 1
                if j > 0 and grid[i][j - 1] == 1:
                    count2 += 1
                count1 += 1
    val = (count1 * 4) - (count2 * 2)
    return val
