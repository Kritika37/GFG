#include<iostream>
using namespace std;
struct node{
	int data;
	node *next = NULL;
};

node *root = NULL;

void addnode(int n){
	if(root==NULL){
		root = new node;
		root->data=n;
	}
	else{
		node *temp = root;
		while(temp->next != NULL){
			temp = temp->next;
		}
		temp->next = new node;
		temp->next->data = n;

	}
}

void display(){
	node *temp = root;
	while(temp!=NULL){
		cout<<temp->data << endl;
		temp=temp->next;
	}
}

int main(){
	addnode(2);
	addnode(5);
	addnode(7);
	display();
}