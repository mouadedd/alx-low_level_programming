#!/usr/bin/python3
""" island's peremeter """


def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""

    width = len(grid[0])
    height = len(grid)
    bank = 0
    size = 0

    for h in range(height):
        for w in range(width):
            if grid[h][w] == 1:
                size += 1
                if (w > 0 and grid[h][w - 1] == 1):
                    bank += 1
                if (h > 0 and grid[h - 1][w] == 1):
                    bank += 1
    return size * 4 - bank * 2
