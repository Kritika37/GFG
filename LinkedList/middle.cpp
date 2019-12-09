#include<iostream>
using namespace std;


int getMiddle(Node *head)
{
   if(head==NULL)
   	return -1;
   else{
   	int c1=0;
   	node *temp = head;
   	while(temp!=NULL){
   	c1++;
   	temp=temp->next;
   		}
   	temp=head;
   for(int i=0;i<c1/2;i++){
   		temp=temp->next;
   		}
   		return temp->data;
   	}
   	


