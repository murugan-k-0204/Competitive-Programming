int getMiddle(Node *head)
{
   int n=0;
   Node* temp=head;
   while(temp!=NULL){
       n++;
       temp=temp->next;
   }
   temp=head;
   n/=2;
   while(n--)
       temp=temp->next;
   return temp->data;
}
