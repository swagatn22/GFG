#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int a = 0;
        int b = 0;
        int c = 0; 
        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'a'){
                a = 2*a + 1;
            }
            else if(s[i] == 'b'){
                b = 2*b + a;
            }
            else if(s[i] == 'c'){
                c = 2*c + b;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}

/*

*/
