void bottomView(Node *root)
{ if(root==NULL){
return;
}
else
{
map<int,int>data;

int hd=0;

queue<pair<Node*,int>>q;
q.push(make_pair(root,hd));

while(!q.empty())
{ Node * temp = q.front().first;
hd=q.front().second;
data[hd] = temp->data;

if(temp->left!=NULL)
q.push(make_pair(temp->left,hd-1));

if(temp->right!=NULL)
q.push(make_pair(temp->right,hd+1));
q.pop();
}
for(auto it:data) 
cout<<it.second<<" ";
}
}