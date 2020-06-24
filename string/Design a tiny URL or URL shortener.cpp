#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	int num;
	cin>>t;
	while(t--){
	    cin>>num;
	    string s = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	    string ans = "";
	    int n = num;
	    while(num > 0){
	        ans = s[num%62]+ans;
	        num /= 62;
	    }
	    cout<<ans<<endl;
	    cout<<n<<endl;
	}
	return 0;
}
