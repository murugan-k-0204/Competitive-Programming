class Solution
{
    public:
    void display(Node *head)
    {
      Node* temp = head;
      while(temp!=NULL){
          cout<<temp->data<<" ";
          temp=temp->next;
      }
    }
};
