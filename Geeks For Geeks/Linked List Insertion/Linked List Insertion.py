'''    
class Node:
    def __init__(self,data):
        self.data=data
        self.next=None
'''
class Solution:
    #Function to insert a node at the beginning of the linked list.
    def insertAtBegining(self,head,x):
        temp = head
        head = Node(x)
        head.next = temp
        return head
        # code here 
    
    #Function to insert a node at the end of the linked list.
    def insertAtEnd(self,head,x):
        temp = head
        if temp==None:
            head = Node(x)
            return head
        while temp.next!=None:
            temp=temp.next
        temp.next=Node(x)
        return head
