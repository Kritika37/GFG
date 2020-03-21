#include<iostream>
using namespace std;

int mat[21][21];
int vis[21][21];

int dfs(int s,int d,int i,int j,int mat[][21],int vis[][21],n,m){
	
	if(i<0 || i >=n || j<0 || j>=m || mat[i][j] == 0) return;
	mat[i][j] = 0;
	dfs(mat,i+1,j,N,M);
	dfs(mat,i-1,j,N,M);
	dfs(mat,i,j-1,N,M);
	dfs(mat,i,j+1,N,M);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int count = 0;
		int n,m;
		cin >> n >> m;
		for (int i = 0; i < n; i++)
		{
			for(int j = 0; j < m; j++){
				cin >> mat[i][j];
				vis[i][j] = 0;
			}
		}
		int s,d;
		cin >> s >> d;
		dfs(s,d,i,j,mat,vis,n,m);
		count++;
	}
}