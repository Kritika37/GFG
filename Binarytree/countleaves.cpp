int countLeaves(Node* root)
{
  if(root == nullptr){
  	return 0;
  }
  else if(root->left == nullptr && root->right != nullptr){
  	return countLeaves(root->right+1);
  }
  else if(root->right == nullptr && root->left != nullptr){
  	return countLeaves(root->left+1);
  }
  else if(root->left== nullptr && root->right== nullptr){
      return 1;
  }
  else
  {
      return countLeaves(root->left) + countLeaves(root->right);
  }
}
