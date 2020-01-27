void helper(Node* root,Node **head_ref,Node** prev)
{
if(root==NULL)return;

helper(root->left,head_ref,prev);

if(*prev==NULL)
{
*head_ref=root;
}
else
{
root->left= *prev;
(*prev)->right=root;
}
*prev=root;
helper(root->right,head_ref,prev);
}


void bToDLL(Node *root, Node **head_ref)
{  if(root == nullptr) return;
    Node* prev = nullptr;
   helper(root,head_ref,&prev); 
}
