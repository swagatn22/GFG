#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	string s;
	while(t--){
	    cin>>s;
	    int odd= 0;
	    int even  = 0;
	    for(int i = s.length()-1; i >= 0; i--){
	        if(s[i] == '1' && i % 2 == 0){
	            even++;
	        }
	        if(s[i] == '1' && i % 2 != 0){
	            odd++;
	        }
	    }
	    abs(even-odd) % 3 == 0 ? cout<<1<<endl:cout<<0<<endl;
	}
	return 0;
}
