#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    int n;
    int k;
    while(t--){
        cin>>n; 
        vector<int>v(n);
        for(int i = 0; i < n; i++){
            cin>>v[i];
        }
        cin>>k;
        unordered_map<int,int>m;
        for(int i = 0; i < n; i++){
            int mod = v[i] % k == 0? 0 : k - v[i] % k;
            if(m.find(mod) != m.end()){
                m[mod]--;
                if(m[mod] == 0)
                    m.erase(mod);
            }else{
                m[v[i] % k]++;
            }
        }
        m.size() == 0 ? cout<<"True"<<endl:cout<<"False"<<endl;
    }
    	return 0;
}
