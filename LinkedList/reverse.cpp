node* reverselist(node* head){
	Node* temp;
	Node* current = head;
	Node* prev = NULL;

	while(current!=NULL){
		temp=current->next;
		current->next=prev;
		prev = current;
		current = temp;

	}
	return  prev;


}
