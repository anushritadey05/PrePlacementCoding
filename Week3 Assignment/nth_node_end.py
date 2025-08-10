#Nth node from end

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

    def nth_from_end(self, n):
        fast = self.head
        slow = self.head

        for _ in range(n):
            if not fast:
                print(f"List has fewer than {n} nodes")
                return
            fast = fast.next

        while fast:
            slow = slow.next
            fast = fast.next

        print(f"{n}th node from end is: {slow.data}")

# Example usage
ll = LinkedList()
ll.insert_at_end(10)
ll.insert_at_end(20)
ll.insert_at_end(30)
ll.insert_at_end(40)
ll.insert_at_end(50)

ll.nth_from_end(2)  # 40
