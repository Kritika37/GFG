bool isPalindrome(Node *head){
	Node* temp = head;
	long long c=0;
	while(temp!=NULL){
		c++;
		temp=temp->next;
	}
		long long arr[c];
		for(long long i=0;i<c;i++){
			arr[i]=temp->data;
			temp=temp->next;
		}
		
		int i=0;
		int j=c;
		bool flag=true;
		while(i<=j){
			if(arr[i]!=arr[j]){
				flag = false;
				break;
				
			}
			else
			{
				i++;
				j--;
			}
		}
		return flag;
	}
