#include<iostream>
#include<algorithm>
using namespace std;

void sum(n,arr,b,v,res){
	int sum = 0;
	for(int i = 0;i<n;i++){
		v.push_back(arr[i]);
		sort(v.begin(), v.end());
	}
	if(sum == 0){
		for (auto i:v)
		{
				
		}
	}
	if(sum == b){
		cout<<"(" v[] ")";
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int arr[n];
		for(int i = 0; i < n;i++){
			cin >> arr[i];
		}
		int b;
		cin >> b;
		vector<int> v;
		vector<int> res;
		sum(n,arr,b,v);
	}
}