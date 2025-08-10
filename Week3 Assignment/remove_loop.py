#Remove loop

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

    def detect_and_remove_loop(self):
        slow = self.head
        fast = self.head

        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next

            # Loop detected
            if slow == fast:
                self.remove_loop(slow)
                return True
        return False

    def remove_loop(self, loop_node):
        ptr1 = self.head

        while True:
            ptr2 = loop_node
            while ptr2.next != loop_node and ptr2.next != ptr1:
                ptr2 = ptr2.next
            if ptr2.next == ptr1:
                break
            ptr1 = ptr1.next

        # Break the loop
        ptr2.next = None

    def print_list(self):
        temp = self.head
        while temp:
            print(temp.data, end=" -> ")
            temp = temp.next
        print("None")

# Example usage
ll = LinkedList()
ll.insert_at_end(10)
ll.insert_at_end(20)
ll.insert_at_end(30)
ll.insert_at_end(40)

# Create loop for testing: last node -> second node
ll.head.next.next.next.next = ll.head.next

if ll.detect_and_remove_loop():
    print("Loop detected and removed")
else:
    print("No loop found")

ll.print_list()
