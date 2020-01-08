#include<iostream>
#include<algorithm>
using namespace std;

struct Activity{
	int s,f;
};

bool compare(Activity s1, Activity s2) 
{ 
    return (s1.f < s2.f); 
}

int activitysel(Activity a[],int n){
	sort(a,a+n,compare);
	int j;
	int i=0;
	int count=0;
	for(j=1;j<n;j++){
		if(a[j].s>=a[i].f)
		{
			count++;
			i=j;
		}
	}
	return count;
}

int main(){
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	Activity a[n];
	for(int i=0;i<n;i++) {
		cin>>a[i].s;
	}
	for(int i=0;i<n;i++) 
		{ cin>>a[i].f;
		}
			cout<<activitysel(a,n)<<endl; 
}
}
