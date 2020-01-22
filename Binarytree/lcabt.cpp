Node * lca(Node* root ,int n1 ,int n2 )
{
if(root==NULL) return NULL;

if(root->data ==n1 || root->data==n2)
return root;
root->left  = lca(root->left,n1,n2);
root->right = lca(root->right,n1,n2);

if(root->left!=NULL&&root->right!=NULL) return root;

if(root->left !=NULL && root->right == NULL)
return root->left;
if(root->right !=NULL & root->left == NULL)
return root->right;

}