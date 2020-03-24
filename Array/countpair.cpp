#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		int count = 0;
		int res;
		cin>>n>>k;
		int a[n];
		for (int i = 0; i < n; i++)
		{
			cin>>a[i];
		}
		for (int i = 0; i < n; i++)
	{	
		if(a[i]+a[i+1] == k)
			count++;
	}
	res = 2*count;
	cout<<res<<endl;
	}
}