#Print matrix in spiral form

def print_spiral(matrix):
    top, bottom = 0, len(matrix) - 1
    left, right = 0, len(matrix[0]) - 1

    while top <= bottom and left <= right:
        # Top row
        for i in range(left, right + 1):
            print(matrix[top][i], end=' ')
        top += 1

        # Right column
        for i in range(top, bottom + 1):
            print(matrix[i][right], end=' ')
        right -= 1

        # Bottom row
        if top <= bottom:
            for i in range(right, left - 1, -1):
                print(matrix[bottom][i], end=' ')
            bottom -= 1

        # Left column
        if left <= right:
            for i in range(bottom, top - 1, -1):
                print(matrix[i][left], end=' ')
            left += 1

# Input
rows = int(input("Enter number of rows: "))
cols = int(input("Enter number of columns: "))

print("Enter matrix elements row-wise:")
matrix = []
for _ in range(rows):
    matrix.append(list(map(int, input().split())))

print("Spiral Order:")
print_spiral(matrix)
