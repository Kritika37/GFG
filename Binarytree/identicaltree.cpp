bool isIdentical(Node *r1, Node *r2)
{
 if(r1 == nullptr && r2 == nullptr){
 return true;
}
else if(r1!= nullptr && r2== nullptr  || r1 == nullptr && r2 != nullptr)
 {return false;
 }
 else 
 	{return(r1->data == r2->data && isIdentical(r1->left, r2->left) && isIdentical(r1->right, r2->right));
 	}
}