SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    SinglyLinkedListNode* temp = new SinglyLinkedListNode(data);
    SinglyLinkedListNode* l =llist;
    position--;
    while(position--){
        l= l->next;
    }
    temp->next = l->next;
    l->next = temp;
    return llist;
}
