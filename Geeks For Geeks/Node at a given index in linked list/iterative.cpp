int GetNth(struct node* head, int index){
    index--;
    while(index--){
        head=head->next;
    }
    return head->data;
}
