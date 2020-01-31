
void serialize(Node *root,vector<int> &A)
{
    if(root == nullptr) {
      return A.push_back(-1); 
    }
    
    A.push_back(root->data);

    serialize(root->left,A);
    serialize(root->right,A);

}
int i = 0;
Node * deSerialize(vector<int> &A)
{
   
   if(i >= A.size() || A[i] == -1){
   i = i+1;
   i%= A.size();
   return nullptr;
   }
    
   Node *root = new Node(A[i]); 
   i = i+1;
   i%= A.size();
   root->left = deSerialize(A);  
   root->right = deSerialize(A); 
   return root;
}


