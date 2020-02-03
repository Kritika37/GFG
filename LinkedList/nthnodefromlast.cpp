int getNthFromLast(Node *head, int n)
{    
    int l =0 ;
    Node* temp = nullptr;
    Node* temp1 = nullptr;
    temp = head;
    while(temp != nullptr){
        temp = temp->next;
        l++;
    }
    temp1 = head;
    if(n > l || temp1 == nullptr) return -1;
    int k = l-n;
    while(k--){
        temp1 = temp1->next;
    }
    return temp1->data;
}