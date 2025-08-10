#Print elements of linked list

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

# Function to print linked list
def print_list(head):
    temp = head
    while temp:
        print(temp.data, end=" -> ")
        temp = temp.next
    print("NULL")

# Creating linked list
head = Node(10)
head.next = Node(20)
head.next.next = Node(30)
head.next.next.next = Node(40)

print("Linked List:")
print_list(head)
