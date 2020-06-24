#include<bits/stdc++.h>
using namespace std;
int BS(vector<vector<int>>mat, int row,int n){
    int left = 0;
    int right = n-1;
    int res = -1;
    int mid;
    while(left <= right){
        mid = (right-left)/2+left;
        if(mat[row][mid] == 1){
            res = mid;
            right = mid-1;;
        }else{
            left = mid+1;
        }
    }
    return res;
}
int main()
{
    int t;
    int m,n;
    cin>>t;
    while(t--){
        cin>>m>>n;
        vector<vector<int>>mat(m,vector<int>(n));
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                cin>>mat[i][j];
            }
        }
        int num = INT_MAX;
        int ans = -1;
        for(int i = 0; i < m; i++){
            int id = BS(mat,i,n);
            if(id != -1 && n-id < num){
                num = n-id;
                ans = i;
            }
        }
        cout<<ans<<endl;
    } 
	return 0;
}
