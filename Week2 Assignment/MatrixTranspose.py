#Transpose of matrix


rows = int(input("Enter number of rows: "))
cols = int(input("Enter number of columns: "))

print("Enter matrix row-wise:")
matrix = [list(map(int, input().split())) for _ in range(rows)]


transpose = [[matrix[j][i] for j in range(rows)] for i in range(cols)]

print("Transpose of the matrix:")
for row in transpose:
    print(*row)
