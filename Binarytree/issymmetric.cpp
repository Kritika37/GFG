bool mirror(  Node* r1,Node* r2)
{
if(r1 == nullptr && r2 == nullptr){
	return true;
}	
else if(r1 == nullptr && r2 != nullptr || r2 == nullptr && r1 != nullptr){
	return false;
}
else if(r1->key == r2->key){
	return (mirror(r1->left,r2->right) && mirror(r1->right,r2->left));
}
else{
    return false;
}
}


bool isSymmetric(struct Node* root)
{
return mirror(root,root);
}