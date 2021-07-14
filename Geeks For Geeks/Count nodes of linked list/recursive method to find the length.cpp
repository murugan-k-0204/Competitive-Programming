class Solution
{
    public:
    int getCount(struct Node* head,int len=1){
        if(head->next==NULL)  
            return len;
        return getCount(head->next,len+1);
    }
};
