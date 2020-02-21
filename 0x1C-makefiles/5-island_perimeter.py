#!/usr/bin/python3
"""contain fucntion island_perimeter
"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid
    """
    count = 0
    for i in grid:
        for j in i:
            if j == 1:
                count = count + 1
    if count != 0:
        count = count + 1
    count = count * 2
    return count
