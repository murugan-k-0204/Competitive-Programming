SinglyLinkedListNode* reverse(SinglyLinkedListNode* llist) {
    if(llist->next==nullptr||llist==nullptr) 
        return llist;
    SinglyLinkedListNode* new_head = reverse(llist->next);
    llist->next->next = llist;
    llist->next = nullptr;
    return new_head;    
}
