void connect(Node* p){
	if(p == nullptr) return;
	
		queue <Node *> q;
		q.push(p);

		while(!q.empty()){
			int s = q.size(); //size of queue at each level
			Node* prev = nullptr;

			while(s--){
			Node* temp = q.front();
			q.pop();

			if(temp->left != nullptr)
				q.push(temp->left);

			if(temp->right != nullptr)
				q.push(temp->right);
				if(prev!= nullptr)
				prev->nextRight=temp;

				prev=temp;
}

				prev->nextRight=NULL;
}

}
