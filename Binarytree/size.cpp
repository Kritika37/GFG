int getSize(Node* node)
{
   if(node == nullptr)
   	return 0;
   else
   	return getSize(node->left),getSize(node->right)+1;
}