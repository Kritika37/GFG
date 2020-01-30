#include<bits/stdc++.h>
using namespace std;

int keyutil(int N){
			

		if(N <= 6) return N;
		if(N > 75) return -1;
		else
		return max(3*keyutil(N-4),4*keyutil(N-5));


}


int main(){
	int t;
	cin >> t;
	while(t--){
		int N;
		cin >> N;
		cout << keyutil(N) << endl;
	}
	
}