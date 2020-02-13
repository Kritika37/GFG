bool isCyclicUtil(int v, bool visited[], int parent){

visited[v] = true;
list<int>::iterator i; 
    for (i = adj[v].begin(); i != adj[v].end(); ++i) 
    { 
        if (!visited[*i]) 
        { 
           if (isCyclicUtil(*i, visited, v)) 
              return true; 
        } 

        else if (*i != parent) 
           return true; 
    } 
    return false; 
} 


bool isCyclic(vector<int> adj[], int V)
{	
	 bool *visited = new bool[V]; 
    for (int i = 0; i < V; i++) 
        visited[i] = false; 
 
    for (int i = 0; i < V; u++) 
        if (!visited[u]) 
          if (isCyclicUtil(i, visited, -1)) 
             return true; 
  
    return false; 
} 
  