#include<bits/stdc++.h>
using namespace std;

void push(int v){
	if(top == n-1){
		cout <<"full"<<endl;
	}
	else
	{
		top++;
		a[top] = v;
	}

}

int large(){
	int i = top+1;
	int j = top+2;
	int k = 0;
	for(k=0; k < n;k++){
	if(a[i] < a[j]){
		cout << a[j] <<endl;
		else
		cout << "-1" <<endl;
	i++;
	j++;
	}
}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		int top = -1;
	}
}