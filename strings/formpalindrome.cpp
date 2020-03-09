#include<iostream>
using namespace  std;

bool flag = true;

bool pali(string s){
int i = 0;
int l = s.size()-1;
while(l>i){
	if(s[i++] != s[l--]){
		flag = false;
		break;
	}
}
return flag;

}

int main()
{
	int t;
	cin >> t;
	while(t--){
	string s;
	cin >> s;

	if(pali(s)){
		cout<< "0" <<endl;
	}
	else
	{

	}
}

	
}