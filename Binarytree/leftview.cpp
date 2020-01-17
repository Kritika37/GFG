void leftView(Node *root)
{
if(root==NULL)
return ;

cout<<root->data<<" ";
if(root->left)
leftView(root->left);

else
leftView(root->right);

}