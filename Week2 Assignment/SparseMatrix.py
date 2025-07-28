#Check if matrix is sparse

rows = int(input("Enter number of rows: "))
cols = int(input("Enter number of columns: "))

print("Enter the matrix row-wise:")
matrix = [list(map(int, input().split())) for _ in range(rows)]

zero_count = sum(cell == 0 for row in matrix for cell in row)
total_elements = rows * cols

if zero_count > total_elements // 2:
    print("The matrix is a sparse matrix.")
else:
    print("The matrix is NOT a sparse matrix.")
