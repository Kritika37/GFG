int height(Node* root){
	
    if(root == nullptr)
    {
        return 0;
    }
    else
    {
    	return 1+height(root->left),height(root->right);
    }
        
    
}

bool isBalanced(Node *root)
{
    
if(root == nullptr){
    return true;
}
else if(root->left == nullptr && root->right != nullptr || root->right == nullptr && root->left != nullptr){
    return false;
}
else
{
  return(isBalanced(root->left)&&isBalanced(root->right)&&(abs(height(root->right)-height(root->left))<=1));
}
}