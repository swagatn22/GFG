#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	int n;
	while(t--){
	    cin>>n;
	    vector<int>vec1(n);
	    vector<int>vec2(n);
	    for(int i = 0; i < n; i++){
	        cin>>vec1[i];
	    }
	    for(int i = 0; i < n; i++){
	        cin>>vec2[i];
	    }
	    vector<int>res(n+n);
	    int j = 0;
	    int ptr1 = 0;
	    int ptr2 = 0;
	    while(ptr1 < n && ptr2 < n){
	        if(vec1[ptr1] == vec2[ptr2]){
	            res[j++] = vec1[ptr1++];
	        }else if(vec1[ptr1] < vec2[ptr2]){
	            res[j++] = vec1[ptr1++];
	        }else{
	            res[j++] = vec2[ptr2++];
	        }
	    }
	    while(ptr1 < n){
	        res[j++] = vec1[ptr1++]; 
	    }
	    while(ptr2 < n){
	        res[j++] = vec2[ptr2++]; 
	    }
	    int sum = res[n-1]+res[n];
	    cout<<sum<<endl;
	}
	return 0;
}
