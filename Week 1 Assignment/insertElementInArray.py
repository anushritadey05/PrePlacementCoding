#1. Insert an element at end of array

array=list(map(int,input("Enter the element:").split()))
element=int(input("Enter the element to insert:"))
array.append(element)
print("New Array:",array)
