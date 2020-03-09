#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    string str,str1,q;
	    cin>>str>>str1
	    q = str1;
	    //for left rotation
	    rotate(str1.begin(),str1.begin()+2,str1.end()); 
	    //for right rotation
	    rotate(q.begin(),q.begin()+q.size()-2,q.end());

	    if(str==q || str==str1)
	    cout<<"1"<<endl;
	    else
	    cout<<"0"<<endl;
	}
	return 0;
}