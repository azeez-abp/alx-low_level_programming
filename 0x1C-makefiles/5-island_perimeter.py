#!/usr/bin/python3

"""Module for calculating the perimeter of island"""


def island_perimeter(grid: list) -> int:
    """get the number of water zone if there is
       only one land zone in the same row
       Args:
       grid (list): A 2dD representation
       Return:
       int : represent the perimeter
    """
    count = 0
    for index_x, x in enumerate(grid):
        start = e
        point_of_1 = 0
        point_of_1_count = 0
        encounter = False
        while start < len(x):
            if x[start] == 1:
                encounter = True
                point_of_1 = start
                point_of_1_count += 1

            if encounter is True and x[start] == 0:
                count += 1
            start += 1
        """count the water zone behind"""

        if point_of_1 > 0 and point_of_1_count == 1:
            while point_of_1 >= 0:
                if x[point_of_1] == 0:
                    count += 1
                point_of_1 -= 1
    return count
