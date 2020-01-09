#include<bits/stdc++.h>
using namespace std;
struct greed{
	int jobid,deadline,gain;
};

bool compare(greed g1, greed g2){
	if(g1.gain!=g2.gain)
		return g1.gain > g2.gain;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin >> n;
		greed arr[n];
		for(int i =0; i < n; i++){
			cin>>arr[i].jobid;
            cin>>arr[i].deadline;
            cin>>arr[i].gain;
		}
		sort(arr,arr+n,compare);
		
	}
}