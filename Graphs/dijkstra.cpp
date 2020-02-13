//Lazy Dijkstra implementation using priority queue to sort the minimum value of edge weight and maintaing visited  boolean array


void dijkstra(vector<vector<int>> graph, int src, int V)
{	 
	bool visited = {false};
	int dist[V];
	for (int i = 0; i < V; ++i)
	{
		dist[i] = 10e7;
	}
	dist[src] = 0;
	priority_queue<pair<int,int> > g;
	g.push(make_pair(0,src));
	while(!g.empty()){

	}
}