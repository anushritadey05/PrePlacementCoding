#Count zeros in matrix

rows = int(input("Enter number of rows: "))
cols = int(input("Enter number of columns: "))

print("Enter matrix row-wise:")
matrix = [list(map(int, input().split())) for _ in range(rows)]

zero_count = sum(cell == 0 for row in matrix for cell in row)

print("Total number of zeros in the matrix:", zero_count)
