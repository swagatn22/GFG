#include<iostream>
using namespace std;
int main()
 {
	//code
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--){
	    int n,q;
	    cin>>n>>q;
	    string s;
	    cin>>s;
	    int prevk = 0;
	    int dx = n;
	    for(int i=0;i<q;i++){
	        int x,k;
	        cin>>x>>k;
	        if(x == 1){
	            k = (k + prevk)%n;
	            prevk = k;
	            dx = n-k;
	        }
	        else{
	            cout<<s[(k+dx)%n]<<endl;
	        }
	    }
	}
	return 0;
}
