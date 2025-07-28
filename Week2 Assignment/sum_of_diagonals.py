#Sum of diagonals

# Input matrix
n = int(input("Enter size of square matrix (n x n): "))

print("Enter the matrix row-wise:")
matrix = [list(map(int, input().split())) for _ in range(n)]

# Initialize sums
main_diagonal = 0
secondary_diagonal = 0

for i in range(n):
    main_diagonal += matrix[i][i]
    secondary_diagonal += matrix[i][n - i - 1]

print("Sum of main diagonal:", main_diagonal)
print("Sum of secondary diagonal:", secondary_diagonal)
print("Total diagonal sum:", main_diagonal + secondary_diagonal)
