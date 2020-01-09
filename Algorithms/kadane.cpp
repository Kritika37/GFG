#include<bits/stdc++.h>
using namespace std;

int subarra(int a[],int n){
	int maxend = 0;
	int maxsofar = INT_MIN;
	for(int i = 0; i < n; i++){
		maxend = maxend + a[i]; 
        if (maxsofar < maxend) 
            maxsofar = maxend; 
  
        if (maxend < 0) 
            maxend= 0; 
    } 
    return maxsofar; 
} 

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		cout << subarra(a,n) << endl;
	}
	
}