class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        if(!head)
            return 0;
        Node* slow = head;
        Node* fast = head->next;
        while(slow!=fast){
            if(fast==NULL || fast->next==NULL)
                return 0;
            slow=slow->next;
            fast=fast->next->next;
        }
        return 1;
    }
};
