void bToDLL(Node *root, Node **head_ref)
{
   if(root == nullptr) return;

   static Node* prev = nullptr;

   bToDLL(root->left,head_ref);
   if(prev == nullptr)
   {
   	*head_ref = root;
   }
   else
   {
   	root->left = prev;
   	prev->right = root;
   }
   prev = root;
   bToDLL(root->right,head_ref);
}