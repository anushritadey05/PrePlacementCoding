#Reverse linked list

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    def push(self, new_data):
        new_node = Node(new_data)
        new_node.next = self.head
        self.head = new_node

    def reverse(self):
        prev = None
        current = self.head

        while current:
            next_node = current.next  # Save next
            current.next = prev       # Reverse pointer
            prev = current            # Move prev
            current = next_node       # Move current

        self.head = prev  # New head

    def printList(self):
        temp = self.head
        while temp:
            print(temp.data, end=" -> ")
            temp = temp.next
        print("None")

# Example usage:
ll = LinkedList()
ll.push(10)
ll.push(20)
ll.push(30)
ll.push(40)

print("Original List:")
ll.printList()

ll.reverse()

print("Reversed List:")
ll.printList()
