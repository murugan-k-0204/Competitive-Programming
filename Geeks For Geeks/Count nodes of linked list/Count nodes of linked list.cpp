class Solution
{
    public:
    int getCount(struct Node* head){
        int count=0;
        while(head!=NULL){
            count++;
            head=head->next;
        }
        return count;
    }
};
