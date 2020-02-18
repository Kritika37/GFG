//Lazy Dijkstra implementation using priority queue to sort the minimum value of edge weight and maintaing visited  boolean array


void dijkstra(vector<vector<int>> graph, int src, int V)
{	 
	bool visited[V] = {0};
	int dist[V];
	for (int i = 0; i < V; ++i)
	{
		dist[i] = 10e7;
	}
	dist[src] = 0;
	priority_queue<pair<int,int> > g;
	g.push(make_pair(0,src));
	while(!g.empty()){
		pair<int,int> current = g.top();
		g.pop();
		int node = current.second;
		int distfromsrc = -1*current.first;
		visited[node] = true;
		for (int i = 0; i < V; i++)
		{
			if(visited[i] == false){}
			int newdist = distfromsrc + graph[node][i];
			if(newdist <= dist[i]){
				dist[i] = newdist;
				g.push(make_pair(-1*dist[i],i));
			}
		}

	}
	for (int i = 0; i < V; i++)
	{
		cout << dist[i] << " ";
	}
}