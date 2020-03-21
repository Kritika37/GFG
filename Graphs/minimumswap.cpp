int minSwaps(int A[], int N){

	int swap = 0;
	int ans = 0;

	pair<int,int> position[N];
	for (int i = 0; i < N; ++i)
	{
		position[i].first = A[i];
		position[i].second = i;
	}

	sort(position,position+N);

	bool vis[N] = {false};

	for (int i = 0; i < N; ++i)
	{
		if(vis[i] || position[i].second == i)
			continue;

		int j = i;

		while(!vis[j]){
			vis[j] = 1;
			j = position[j].second;
			swap++;
		}
		ans += (swap - 1);
	}
	return ans;
    
}