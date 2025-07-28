#Rotate matrix by 90 degree

def rotate90_clockwise(matrix):
    # Transpose and then reverse each row
    rotated = [list(row) for row in zip(*matrix[::-1])]
    return rotated

# Input
rows = int(input("Enter number of rows: "))
cols = int(input("Enter number of columns: "))

print("Enter matrix elements row-wise:")
matrix = []
for _ in range(rows):
    matrix.append(list(map(int, input().split())))

# Rotate
rotated = rotate90_clockwise(matrix)

# Output
print("Matrix after 90-degree rotation:")
for row in rotated:
    print(*row)
