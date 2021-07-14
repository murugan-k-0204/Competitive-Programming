int GetNth(struct node* head, int index){
  if(index==1) return head->data;
  return GetNth(head->next,index-1);
}
