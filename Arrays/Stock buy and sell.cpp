#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>vec(n);
	    int buy = 0;
	    int sell = 0;
	    for(int i = 0; i <n; i++){
	        cin>>vec[i];
	    }
	    for(int i = 0; i<n-1;){
	        while(i < n-1 && vec[i] >= vec[i+1]){
	            i++;
	        }
	        if(i == n-1){
	            break;
	        }
	        buy = i++;
	        while(i < n-1 && vec[i] <= vec[i+1]){
	            i++;
	        }
	        sell = i++;
	        cout<<'('<<buy<<" "<<sell<<')'<<" "; 
	    }
	    if(buy == 0 && sell ==0)
            cout<<"No Profit";
        cout<<endl;
	    
	}
	return 0;
}
