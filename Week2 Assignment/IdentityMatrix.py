#Identity matrix check

n = int(input("Enter the size of square matrix (n x n): "))
print("Enter the matrix row-wise:")

matrix = [list(map(int, input().split())) for _ in range(n)]

is_identity = True

for i in range(n):
    for j in range(n):
        if (i == j and matrix[i][j] != 1) or (i != j and matrix[i][j] != 0):
            is_identity = False
            break

if is_identity:
    print("The matrix is an identity matrix.")
else:
    print("The matrix is NOT an identity matrix.")
