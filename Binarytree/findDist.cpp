int findDist(Node* root, int a, int b)
{
    if(root == nullptr) return 0;
 	else if(root->data > a && root->data >b){
 		return findDist(root->left,a,b);
 	}
 	else if(root->data < a && root->data < b){
 		return findDist(root->right,a,b);
 	}   
 	else if()
}