#include<bits/stdc++.h> 
using namespace std;

int main(){

	int t;
	cin >> t;
	while(t--){
		int V;
		cin >> V;
        int m[500][500];
        int path[V][V];
		for(int i = 0;i < V;i++){
			for(int j = 0;j<V;j++){
				cin >> m[i][j];
			}
		}

for(int i =0;i<V;i++){
	for(int j =0;j < V;j++){
		path[i][j] = m[i][j];
	}
}


for(int k =0;k < V;k++){

	for (int i = 0; i < V; i++)
	{
		for (int j = 0; j < V; j++)
		{
			if(path[i][j] > path[i][k] + path[k][j])
				path[i][j] = path[i][k] + path[k][j];
		}
	}
}

	for (int i = 0; i < V; i++)
	{
		for (int j = 0; j < V; j++)
		{
			if(path[i][j] != 1e7)
			{
				cout <<  path[i][j] <<" ";
			}
			else
			{
				cout << "INF" <<" " ;
			}
			
		}
		cout<<endl;
	}
}

}