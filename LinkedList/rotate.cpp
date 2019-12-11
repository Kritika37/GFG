Node* rotate(Node* head, int k) {
   Node* temp = head;
   Node* current;
   
   while(temp->next){
   	temp=temp->next;
   }
   temp->next=head;

   while(k--){
   	current = head;
   	head=head->next;
   }
   current->next=NULL;
   return head;
}
