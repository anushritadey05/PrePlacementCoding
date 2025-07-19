#9.Count frequency of array element

array = list(map(int, input("Enter the elements: ").split()))

frequency = {}

for element in array:
    if element in frequency:
        frequency[element] += 1
    else:
        frequency[element] = 1

for key, value in frequency.items():
    print(f"Element {key} occurs {value} time(s).")

