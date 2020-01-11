#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
node* left;
node* right;
};

node* getnewnode(int data){
	node* newnode = new node();
	newnode->data = data;
	newnode->right = NULL;
	newnode->left = NULL;
	return newnode;
}

node* insert(node* rootptr,int data){
if(rootptr == NULL){
	rootptr = getnewnode(data);
}
else if(data <= rootptr->data){
	rootptr->left = insert(rootptr->left,data);
}
else{
	rootptr->right = insert(rootptr->right,data);
}
return rootptr;
}

bool search(node* rootptr,int data){
	if(rootptr == NULL) return false;
	else if(rootptr->data == data) return true;
	else if(data <= rootptr->data) return search(rootptr->left,data);
	else return search(rootptr->right,data);
}


int main(){
int n;
node* rootptr = NULL; // Pointer to root not root	
rootptr = insert(rootptr,4);
rootptr = insert(rootptr,8);
rootptr = insert(rootptr,3);
cout << "Number to be searched \n";
cin >> n;
if(search(rootptr,n) == true)
{
	cout << "Found\n";
}
else
{
	cout << "Not found\n";
}
}



