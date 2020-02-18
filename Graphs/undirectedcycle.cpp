bool dfs(int par, vector<int> adj[],int i,bool visited[]){
visited[i]=1;

for(auto it=adj[i].begin();it!=adj[i].end();it++){
if(!visited[*it]){
if(dfs(*it,adj,i,visited))
return true; 
}
else if((*it!=par)) return true;
}

return false;
} 
bool isCyclic(vector<int> adj[], int V)
{ for(int i = 0;i<V;i++){  
  bool visited[V]= {false};        
  if(dfs(-1,adj,i,visited))
  return true;
}
return false;
   
}