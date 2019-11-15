#!/usr/bin/python3

def island_perimeter(grid):
    for raw in range(len(grid)):
        for col in range(len(grid[raw])):
            print(grid[raw][col],end=' ')
            if grid[raw][col] == 1:
                print("number one", end="")

                
        print()
"""

if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]

    print(island_perimeter(grid))
"""