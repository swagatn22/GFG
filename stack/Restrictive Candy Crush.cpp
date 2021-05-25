string Reduced_String(int k,string s){
        // Your code goes here
        if(k == 1) return "";
        stack<pair<char,int>>st;
        for(int i = 0; i < s.length(); i++){
            if(st.empty()){
                st.push({s[i],1});
            }else{
                char c = st.top().first;
                int val = st.top().second;
                if(c == s[i]){
                    val++;
                    if(val == k) st.pop();
                    else st.top().second++;
                }else{
                    st.push({s[i],1});
                }
            }
        }
        string res = "";
        while(!st.empty()){
            while(st.top().second--)
                res += st.top().first;
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
