#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	int temp1,temp2;;
	int res;
	int num;
	cin>>t;
    while(t--){
        cin>>num;
        int even = num & (0xAAAAAAAA);
        int odd = num & (0x55555555);
        even >>= 1;
        odd <<= 1;
        res = (even|odd);
        cout<<res<<endl;
    }
	return 0;
}
