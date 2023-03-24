#!/usr/bin/python3
"""Island Perimeter Module"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid

    Args:
        grid: a list of list of integers
    """
    sum = 0
    for a, x in enumerate(grid):
        for b, y in enumerate(x):
            if y == 1:
                if b != 0 and b!= len(x) - 1:
                    sum += 1
    if sum == 0 or sum == 1:
        return sum
    return (sum + 1) * 2
