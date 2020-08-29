#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	int num;
	int count;
	while(t--){
	    cin>>num;
	    count = 0;
	    int ans = 0;
	    while(num > 0){
	        if(num & 1){
	            count++;
	            ans = max(count,ans);
	        }else{
	            count = 0;
	        }
	        num>>=1;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
