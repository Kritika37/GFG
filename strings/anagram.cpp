#include <iostream>
using namespace std;

bool flag = true;


bool isAnagram(string str, string str1) {
        if (str.length() != str1.length()) return false;
        int n = str.length();
        int counts[26];
        for(int i = 0;i<26;i++){
            counts[i] = 0;
        }
        for (int i = 0; i < n; i++) { 
            counts[str[i] - 'a']++;
            counts[str1[i] - 'a']--;
        }
        for (int i = 0; i < 26; i++) // used flag to check whole array if there was any change in frequency
            if (counts[i] != 0){
            	flag = false;
            break;
        }
            return flag;
    }

int main() {
	int t;
	cin >> t;
	while(t--){
	    string str,str1;
	    cin>> str >>str1;
	    if(isAnagram(str,str1)){
	        cout << "YES"<< endl;
	    }
	    
	    else
	    {
	    
	        cout<<"NO"<<endl;
	    }
	}
}
	   