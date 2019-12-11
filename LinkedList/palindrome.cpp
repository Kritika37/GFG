bool isPalindrome(Node *head){
	Node* temp = head;
	int c=0;
	while(temp!=NULL){
		c++;
		temp=temp->next;
	}
	temp = head;
	int arr[c];
		for(int i=0;i<c;i++){
			arr[i]=temp->data;
			temp=temp->next;
		}
		
		int i=0;
		int j=c-1;
		bool flag=true;
		while(i<=j){
			if(arr[i]!=arr[j]){
				flag = false;
				break;
				
			}
			i++; j--;
		}
		return flag;
	}
