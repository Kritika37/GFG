#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,s;
		cin >>n >>s;
		int arr[n];
		for(int i =0; i<n ;i++){
			cin >> arr[i];
		}
		int sum = 0;
		int j = 2;
		for(int i = 1;i<n;i++){
			sum = arr[i]+sum;
			if(sum > s){
				i = j;
				j++:
			}
			if(sum == s){
				cout << j+1 << " " <<i+1 <<"\n";
			}
			else
			{
				return -1;
			}
}
}
}