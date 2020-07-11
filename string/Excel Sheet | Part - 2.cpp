#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        int num = 0;
        int j = 0;
        for(int i = s.length()-1; i >= 0; i--){
            num = num + (s[i]-'A'+1)*pow(26,j++);
        }
        cout<<num<<endl;
    }
	//code
	return 0;
}
