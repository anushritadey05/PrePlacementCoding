#Dynamic Array operation

arr = []

# Insert elements
arr.append(10)
arr.append(20)
arr.append(30)

print("After insertion:", arr)

# Delete an element
arr.remove(20)  # removes first occurrence of 20
print("After deletion:", arr)

# Access
print("Element at index 1:", arr[1])

# Resize happens automatically (append or pop)
arr.append(40)
arr.append(50)
print("After more insertions:", arr)

# Remove last element
arr.pop()
print("After popping:", arr)
