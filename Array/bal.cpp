#include<iostream>
using namespace std;
int balance(int a[], int n){
    int p=0;
    int q=0;
    for(int i=0; i<n/2; i++) 
    p+= a[i];  
    for(int i=n/2; i<n; i++) 
    q+= a[i]; 
    return abs(p - q); 
} 
int main(){
	int t;
	cin>>t;
	while(t--){
	int n ;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
    cout << balance(arr,n)<< endl;
}
}
