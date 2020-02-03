void bfs(int s, vector<int> adj[], bool vis[], int N)
{
   queue <int> q;
   q.push(s);
   vis[s] = 1;
   while(!q.empty()){
       int p = q.front();
        cout<<p<<" ";
        q.pop();
        for(auto i:adj[p]){
            if(!vis[i]){
                vis[i]=true;
                q.push(i);
            }
        }
   }
    
}