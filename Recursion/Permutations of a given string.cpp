void solve(string s,string op,vector<string>&ans){
	        if(s.length() == 0){
	            ans.push_back(op);
	            return;
	        }
	        for(int i = 0; i < s.length(); i++){
	            string ip = s;
	            ip.erase(ip.begin()+i);
	            solve(ip,op+s[i],ans);
	        }
	    }
		vector<string>find_permutation(string S)
		{
		    int n = S.length();
		    vector<string>ans;
		    solve(S,"",ans);
		    sort(ans.begin(),ans.end());
		    return ans;
		    // Code here there
		}
