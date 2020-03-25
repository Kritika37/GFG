#include<bits/stdc++.h>
using namespace std;

int countbit(int n){
    int count = 0;
    while(n){
      int i = n;
      n--;
      while(i){
      count += i & 1; //bitwise AND
      i >>= 1; //right shift the bit of number to drop the bit already checked
    }
  }
    return count;
}

int main() {
  int t;
  cin >> t;
  while(t--){
      int n;
      cin >> n;
      cout<<countbit(n)<<endl;
  }
}