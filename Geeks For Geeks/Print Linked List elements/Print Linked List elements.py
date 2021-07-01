class Solution:
    def display(self,node):
        temp = node
        while temp!= None:
            print(temp.data,end=" ")
            temp = temp.next
