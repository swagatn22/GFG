#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void subarraysum(vector<int>vec, int n, int target){
        int start = 1;
        int j = 0;
        int end = 0;
        int sum = vec[0];
        for(int i = 1; i<=n; i++){
            while(sum >target){
                sum -= vec[j++];
            }
            if(sum == target){
                cout<<j+1<<" "<<i<<endl;
                break;
            }
            if(i < n){
                sum += vec[i];
            }
            if(i == n){
                cout<<-1<<endl;
            }
        }
}
int main() {
    int t;
    cin>> t;
    while(t){
        int n;
        cin>> n;
        int num;
        cin>>num;
        vector<int>vec(n);
        int a;
        for(int i = 0; i<n; i++){
            cin>>a;
            vec[i] = a;
        }
        subarraysum(vec,n,num);
        t--;
    }
    return 0;
}

	
