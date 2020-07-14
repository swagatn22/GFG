#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int t;
     int n;
     int k;
     cin>>t;
     while(t--){
        cin>>n;
        vector<int>v(n);
        queue<int>q;
        int count = 0;
        for(int i = 0; i < n; i++){
            cin>>v[i];
            if(v[i] < 0){
                q.push(v[i]);
            }
        }
        cin>>k;
        for(int i = 0; i <k;i++){
            if(v[i] < 0){
               count++;
            }
        }
        if(count == 0){
            cout<<0<<" ";
        }else{
            cout<<q.front()<<" ";
        }
        for(int i = k; i < n; i++){
            if(v[i-k] < 0){
                count--;
                q.pop();
            }
            if(v[i] < 0){
               count++;
            }
            if(count == 0){
                cout<<0<<" ";
            }else{
                cout<<q.front()<<" ";
            }
        }
        cout<<endl;
        
     }
	//code
	return 0;
}
