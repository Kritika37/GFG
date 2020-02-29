#include<iostream>
using namespace std;

int arr[100];

int fib(int n){
	if(n<=1){
		return n;
	}
	else if(arr[n] != -1){
		return arr[n];
	}
	else
	{
		arr[n] = fib(n-1) + fib(n-2);
		return arr[n];
	}
}

int main(){
	for (int i = 0; i < 100; ++i)
	{
		arr[i] = -1;
	}
	int n;
	cin >> n;
	
	cout<<fib(n);
}