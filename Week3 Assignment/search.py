#Search in linked list

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    def insert_at_end(self, data):
        new_node = Node(data)
        if not self.head:
            self.head = new_node
            return
        temp = self.head
        while temp.next:
            temp = temp.next
        temp.next = new_node

    # Iterative search
    def search_iterative(self, key):
        position = 1
        temp = self.head
        while temp:
            if temp.data == key:
                return position
            temp = temp.next
            position += 1
        return -1  # Not found

    # Recursive search helper
    def search_recursive(self, node, key, position=1):
        if node is None:
            return -1
        if node.data == key:
            return position
        return self.search_recursive(node.next, key, position + 1)

# Example usage
ll = LinkedList()
ll.insert_at_end(10)
ll.insert_at_end(20)
ll.insert_at_end(30)
ll.insert_at_end(40)

key = 30
pos = ll.search_iterative(key)
print(f"Iterative: {key} found at position {pos}" if pos != -1 else f"Iterative: {key} not found")

pos = ll.search_recursive(ll.head, key)
print(f"Recursive: {key} found at position {pos}" if pos != -1 else f"Recursive: {key} not found")
