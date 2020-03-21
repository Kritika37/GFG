#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		unordered_map<char,bool> mp;
		int l = s.size();
		for (int i = 0; i < l; ++i)
		{
			mp[s[i]] = true;
		}
		for (int i = 0; i < l; ++i)
		{
			if(mp[s[i]]){
				cout<<s[i];
				mp[s[i]]=false;
			}
		}
		cout<<endl;
	}
}