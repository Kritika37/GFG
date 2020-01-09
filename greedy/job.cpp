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
		bool slot[n];
        int max=0,c=0;
        for (int i=0; i<n; i++) 
             slot[i] = false; 
         
    	for (int i=0; i<n; i++) {
        for (int j=min(n, arr[i].deadline)-1; j>=0; j--) 
       { 
          if (slot[j]==false) 
          { 
             c++;
             max=arr[i].gain+max;
             slot[j] = true; 
             break; 
          } 
       } 
    }
	        cout << c<<" "<< max<<endl;
    }
	return 0;
}