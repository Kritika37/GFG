void dfs(int s, vector<int> g[], bool vis[]){
    stack<int> d;
    d.push(s);
    cout<<s<<" ";
    vis[s]=1;
    while(!d.empty()){
        int p =d.top();
        int flag=0;
        for(int i=0;i<g[p].size();i++){
            if(vis[g[p][i]]!=1){
                d.push(g[p][i]);
                cout<<g[p][i]<<" ";
                vis[g[p][i]]=1;
                flag=1;
                break;
            }
        }
        if(!flag) d.pop();
    }
}