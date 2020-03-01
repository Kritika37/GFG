#include <iostream>
using namespace std;

int A[21][21];
int vis[21][21];


int dfs(int x,int y,int n,int A[][21],int vis[][21]){
	if(x<0 || x >=n || y<0 || y>=n || A[x][y] == 0 || vis[x][y] == 1) return 0;

	vis[x][y] = 1;

	if(A[x][y] == 2)
		return 1;

	if(dfs(x-1,y,n,A,vis) || dfs(x,y-1,n,A,vis) || dfs(x+1,y,n,A,vis) || dfs(x,y+1,n,A,vis))
		return 1;
}


int main() {
	
	
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int x,y;
	    for(int i = 0;i < n;i++){
	        for(int j =0; j < n; j++){
	             cin >> A[i][j];
	             vis[i][j] = 0;
	            if(A[i][j] == 1){
	                x = i;
	                y = j;
	            }
	        }
	    }
	   cout << dfs(x,y,n,A,vis) <<endl;
	    
	}
	return 0;
}