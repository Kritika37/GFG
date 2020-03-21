#include<iostream>
using namespace std;

int countpair(int n,int k){
	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for (int i = 0; i < n; i++)
		{
			cin>>a[i];
		}
		cout<<countpair(n,k)<<endl;
	}
}