int height(Node* node)
{
   if(node == nullptr)
   	return 0;
   else return max(height(node->left),height(node->right)) + 1;

}
