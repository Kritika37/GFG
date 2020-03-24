//using recusrsion  swap the left subtree and rightsubtree

void mirror(Node* node) 
{    Node* temp = nullptr;
     if(node == nullptr)return ;
     if(node->left == nullptr && node->right == nullptr)return;
     mirror(node->left);
     mirror(node->right);
     temp = node->left;
     node->left = node->right;
     node->right = temp;
     
}