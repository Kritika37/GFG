#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string str;
		cin>>str;
		stack<string> s;
		int i=0;
		string st;

	while(str[i] != '.' && str[i] != '\0'){
	st+=str[i++];
	s.push(st);
	if(str[i] !='\0')
	i++;
}
while(1)
{
string ptr=s.top();
cout<<ptr; s.pop();
}
}
}