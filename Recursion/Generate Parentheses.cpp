vector<string> AllParenthesis(int n) 
    {
        // Your code goes here 
        string res = "";
        vector<string>ans;
        int o = n;
        int c = n;
        solve(o,c,res,ans);
        return ans;
    }
    void solve(int open, int close,string res,vector<string>&ans){
        if(open == 0 && close == 0){
            ans.push_back(res);
            return;
        }
        if(open != 0){
           string op = res + "(";
            solve(open-1,close,op,ans);
        }
        if(open < close){
            string op = res + ")";
            solve(open,close-1,op,ans);
        }
    }
