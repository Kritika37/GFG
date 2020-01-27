#include<iostream>
using namespace std;


int path(int m,int n){
    if(m == 0 || n ==0){return 0;
    }
	if(m == 1 && n ==1)
	{return 1;
	}else
	{
	return path(m,n-1)+path(m-1,n);
}
}


int main(){
	int t;
	cin >> t;
	for(int i =0;i<t;i++){
	int m,n;
	cin >> m >> n;
	cout << path(m,n) << endl;
	}
	
}