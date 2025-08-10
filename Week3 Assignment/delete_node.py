#Delete a node

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    def delete_from_beginning(self):
        if not self.head:
            print("List is empty")
            return
        self.head = self.head.next

    def delete_from_end(self):
        if not self.head:
            print("List is empty")
            return
        if not self.head.next:  # Only one node
            self.head = None
            return
        temp = self.head
        while temp.next.next:
            temp = temp.next
        temp.next = None

    def delete_by_value(self, value):
        if not self.head:
            print("List is empty")
            return
        if self.head.data == value:
            self.head = self.head.next
            return
        temp = self.head
        while temp.next and temp.next.data != value:
            temp = temp.next
        if not temp.next:
            print("Value not found")
            return
        temp.next = temp.next.next

    def print_list(self):
        temp = self.head
        while temp:
            print(temp.data, end=" -> ")
            temp = temp.next
        print("None")

    def insert_at_end(self, data):
        new_node = Node(data)
        if not self.head:
            self.head = new_node
            return
        temp = self.head
        while temp.next:
            temp = temp.next
        temp.next = new_node

# Example usage
ll = LinkedList()
ll.insert_at_end(10)
ll.insert_at_end(20)
ll.insert_at_end(30)
ll.insert_at_end(40)

print("Original List:")
ll.print_list()

ll.delete_from_beginning()
print("After deleting from beginning:")
ll.print_list()

ll.delete_from_end()
print("After deleting from end:")
ll.print_list()

ll.delete_by_value(20)
print("After deleting value 20:")
ll.print_list()
