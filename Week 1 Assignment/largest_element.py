#2. Find largest element in array
array = list(map(int, input("Enter the elements: ").split()))
largest = array[0]
for i in array:
    if i > largest:
        largest = i

print("The largest element is:", largest)
