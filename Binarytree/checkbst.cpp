bool isbstutil(Node* root,int min,int max){
	if(root == NULL) 
		{return true;
		}
	if(root->data <= min || root->data > max)
	{
		return false;
	}
	return isbstutil(root->left,min,root->data)
	&& isbstutil(root->right,root->data,max);
}
bool isBST(Node* root) {
isbstutil(root,INT_MIN,INT_MAX);
}