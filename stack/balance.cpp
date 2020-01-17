#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
string s;
stack <char> t;
int flag=1,i=0;

cin >> s;

while(s[i]!='\0')
{
if((s.at(i)=='(')||(s.at(i)=='{')||(s.at(i)=='['))
t.push(s[i]);

else if(((t.top()=='(')&&(s.at(i)==')'))||((t.top()=='{')&&(s.at(i)=='}'))||((t.top()=='[')&&(s.at(i)==']')))
t.pop();

else
{flag =0; 
	break;
}
i++;

}
if(t.empty()&&flag)
cout<< "balanced" <<endl; 
else
cout<< "not balanced" <<endl;
}
}