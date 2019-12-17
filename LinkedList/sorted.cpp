Node* sortedMerge(Node* head1, Node* head2){
Node *head = nullptr, *temp = nullptr;
Node *temp1 = nullptr, *temp2 = nullptr, *p = nullptr;

temp1 = head1;
temp2 = head2;
if(temp1->data > temp2->data){
head = temp2;
temp2 = temp2->next;
}
else{
head = temp1;
temp1 = temp1->next;
}
temp = head;
while(temp1 != nullptr && temp2 != nullptr){
if(temp1->data > temp2->data){
temp->next = temp2;
temp = temp2;
temp2 = temp2->next;
}
else if(temp1->data <= temp2->data){
temp->next = temp1;
temp = temp1;
temp1 = temp1->next;
}
}
if(temp2 == nullptr){
temp->next = temp1;
}
else if(temp1 == nullptr){
temp->next = temp2;
}
return head;
}
