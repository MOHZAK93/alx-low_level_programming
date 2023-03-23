#!/usr/bin/python3
"""Island Perimeter Module"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid

    Args:
        grid: a list of list of integers
    """
    sum = 0
    for x in grid:
        for y in x:
            if y == 1:
                sum += 1
    return (sum + 1) * 2
