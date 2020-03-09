#include<iostream>
using namespace std;

int lcs(int n,int m,string s1,string s2){
	

if (m == 0 || n == 0)
		return 0;

	// if last character of X and Y matches
	if (s1[n - 1] == s2[m - 1])
		return lcs(n-1,m-1,s1,s2) + 1;

	// else if last character of X and Y don't match
	return max(lcs(n-1,m,s1,s2), lcs(n,m-1,s1,s2));

}


int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		string s1,s2;
		cin >> s1;
		cin >> s2;
		cout<<lcs(n,m,s1,s2) << endl;
	}
}