#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		while(s.length() == 0)
		getline(cin,s);
		unordered_map<char, int> umap; 
		for(auto i:s){
			if(umap.find(i) == umap.end()){
				umap[i]++;
				cout<<i;
			}
		}
		cout<<endl;
	}
}


//use getline for space in string and s.length == 0