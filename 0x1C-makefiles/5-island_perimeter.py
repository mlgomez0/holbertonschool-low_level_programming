	i/usr/bin/python3
"""contain fucntion island_perimeter
"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid
    """
    count = 0
    if (len(grid) <= 100 and len(grid[0]) <= 100):
        for i in grid:
            for j in i:
                if j == 1:
                    count = count + 1
        if count >= 1:
            count = count * 2 + 2
        return count
