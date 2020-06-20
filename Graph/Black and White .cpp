#include<bits/stdc++.h>
using namespace std;
int is_valid(int r, int c, int m, int n){
    if(r >= 0 && r < m && c >= 0 && c < n){
        return 1;
    }
    return 0;
}
int check(int i, int j, int n, int m){
    int ans = 0;
    int dx[] = {2,2,-2,-2,-1,1,1,-1};
    int dy[] = {-1,1,-1,1,-2,2,-2,2};
    for(int k = 0;k < 8; k++){
        int a = i + dx[k] ;
        int b = j + dy[k];
        if(is_valid(a, b, n, m)){
            ans++;
        }
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int ans = (n * m - 1) * n * m;
        for(int i = 0;i < n; i++){
            for(int j = 0;j < m; j++){
                ans -= check(i, j, n, m);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
