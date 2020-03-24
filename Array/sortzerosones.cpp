#include <bits/stdc++.h> 
using namespace std;

void inserstion(int arr[],int N){
     int i,j,key;
	    for(int i = 1;i < N;i++){
	        key =arr[i];
	        j = i-1;
	        while(j >= 0 && arr[i] >key){
	            arr[j+1] = arr[j];
	            j = j-1;
	        }
	        arr[j+1] = key;
}
}

void print(int arr[],int N){
 for(int i = 0;i<N;i++){
	    cout<<arr[i]<<" ";
}

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
	    int N;
	    cin>>N;
	    int arr[N];
	    for(int i=0;i<N;i++){
	        cin>>arr[i];
	    }
	    insertion(arr,N);
	    print(arr,N);
	    cout<<endl;
	}

