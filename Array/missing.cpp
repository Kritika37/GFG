#include<iostream>
using namespace std;
int missing(int a[],int n){
	int sum=(n*(n+1))/2;
	for(int i=0;i<n;i++){
		sum=sum-a[i];
	}
	return abs(sum);
}
int main(){

	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
    cout << missing(arr, n) <<endl;
} 
}

